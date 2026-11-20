# Smart Incubator Temperature Monitoring Using KiwisIoT

## Project Overview

This project monitors temperature inside an incubator using a DS18B20 digital temperature sensor. The NodeMCU ESP8266 collects temperature readings, evaluates them against a configured temperature range, and sends the data to KiwisIoT through Wi-Fi.

The cloud dashboard allows users to remotely monitor temperature conditions and identify temperature deviations.

## Hardware Components

- NodeMCU ESP8266
- DS18B20 Temperature Sensor
- 4.7kΩ Pull-up Resistor
- Jumper Wires
- USB Power Supply

## Circuit Connections

| DS18B20 | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DATA | D2 (GPIO4) |

A 4.7kΩ pull-up resistor is connected between DATA and 3.3V.

## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 0 | Incubator Temperature (°C) |
| Channel 1 | Temperature Status |

The dashboard can display temperature using gauges, numeric widgets, charts, and labels.

## Software

- Arduino IDE
- ESP8266 Board Package
- OneWire Library
- DallasTemperature Library
- KiwisIoT Arduino Library

## Working Principle

The DS18B20 sensor measures the incubator temperature and sends the reading to the NodeMCU ESP8266. The controller compares the measured temperature with the configured limits and determines the temperature status.

The temperature and status information are transmitted to KiwisIoT through Wi-Fi, where users can monitor incubator conditions remotely.

## Project Blog

Read the complete project tutorial on Hackster.io:

[Smart Incubator Temperature Monitoring Using KiwisIoT](https://www.hackster.io/kirusokumar/smart-incubator-temperature-monitoring-using-kiwisiot-f01c81)

## KiwisIoT Resources

- Website: https://www.kiwisiot.in/
- Arduino Library: https://github.com/Kiwistron/KiwisIoT
- Example Projects: https://github.com/Kiwistron/KiwisIoT-Projects/

## Author

**Kirusokumar**

---

If you find this project useful, consider exploring more IoT projects using KiwisIoT.
