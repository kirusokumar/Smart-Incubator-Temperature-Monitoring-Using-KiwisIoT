#include <OneWire.h>
#include <DallasTemperature.h>
#include <KiwisIoT.h>

// Wi-Fi credentials
const char* ssid = "Kiwis";
const char* pass = "Kiwis1234";
const char* topic = "dash_1795166766970";

// KiwisIoT
KiwisIoT kiwisiot(ssid, pass, topic);

// DS18B20 sensor
#define SENSOR_PIN D4

OneWire oneWire(SENSOR_PIN);
DallasTemperature sensors(&oneWire);

// Temperature monitoring range
const float MIN_TEMP = 37.0;
const float MAX_TEMP = 38.0;

// Update interval
unsigned long lastSend = 0;
const unsigned long SEND_INTERVAL = 5000;

float incubatorTemperature = 0;
String temperatureStatus = "NORMAL";

void setup()
{
  Serial.begin(115200);

  sensors.begin();

  kiwisiot.begin();

  Serial.println("Incubator Monitoring Started");
}

void loop()
{
  kiwisiot.run();

  if (millis() - lastSend >= SEND_INTERVAL)
  {
    lastSend = millis();

    sensors.requestTemperatures();

    incubatorTemperature =
      sensors.getTempCByIndex(0);

    // Sensor validation
    if (incubatorTemperature == DEVICE_DISCONNECTED_C)
    {
      Serial.println("DS18B20 Sensor Error");
      return;
    }

    // Temperature evaluation
    if (incubatorTemperature < MIN_TEMP)
    {
      temperatureStatus = "LOW TEMPERATURE";
    }
    else if (incubatorTemperature > MAX_TEMP)
    {
      temperatureStatus = "HIGH TEMPERATURE";
    }
    else
    {
      temperatureStatus = "NORMAL";
    }

    // Serial Monitor
    Serial.println("----------------------");

    Serial.print("Incubator Temperature: ");
    Serial.print(incubatorTemperature);
    Serial.println(" C");

    Serial.print("Temperature Status: ");
    Serial.println(temperatureStatus);

    // Send data to KiwisIoT
    kiwisiot.send("0", String(incubatorTemperature, 2));

    kiwisiot.send("1", temperatureStatus);
  }
}
