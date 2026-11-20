# Smart Incubator Temperature Monitoring Using KiwisIoT

A simple IoT-based incubator temperature monitoring system using **NodeMCU ESP8266** and **DS18B20 temperature sensor** to monitor incubator temperature in real time and visualize the readings through the KiwisIoT cloud dashboard.

## About the Project

Maintaining a stable temperature inside an incubator is important for successful incubation. This project uses a DS18B20 temperature sensor connected to a NodeMCU ESP8266 to monitor incubator temperature.

The ESP8266 collects temperature readings, compares them with a configured temperature range, and sends the data to KiwisIoT through Wi-Fi.

The dashboard helps users monitor incubator temperature remotely and identify temperature deviations.

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
| DATA | D4 |

A 4.7kΩ pull-up resistor is connected between DATA and 3.3V.

## Features

- Real-time incubator temperature monitoring
- DS18B20 digital temperature sensing
- Temperature range monitoring
- Wi-Fi connectivity using ESP8266
- Cloud dashboard visualization
- Remote temperature monitoring

## KiwisIoT Dashboard

The sensor data is transmitted to KiwisIoT using separate channels.

| Channel | Data |
|---|---|
| Channel 0 | Incubator Temperature (°C) |
| Channel 1 | Temperature Status |

Temperature readings can be visualized using gauges, numeric widgets, charts, and labels.

## Software Used

- Arduino IDE
- ESP8266 Board Package
- OneWire Library
- DallasTemperature Library
- KiwisIoT Arduino Library

## Working Principle

The DS18B20 sensor measures the temperature inside the incubator and sends the digital reading to the NodeMCU ESP8266.

The controller compares the temperature with the configured limits and determines whether the temperature is normal, low, or high.

The temperature and status information are transmitted to KiwisIoT through Wi-Fi, allowing users to monitor incubator conditions remotely.

## Project Tutorial

Explore the complete project, implementation, and details on Hackster.io:

[Smart Incubator Temperature Monitoring Using KiwisIoT](https://www.hackster.io/kirusokumar/smart-incubator-temperature-monitoring-using-kiwisiot-f01c81)

## Explore KiwisIoT

I used **KiwisIoT** for cloud connectivity and real-time temperature visualization in this project.

🌐 **KiwisIoT Platform:** https://www.kiwisiot.in/

📚 **KiwisIoT Arduino Library:** https://github.com/Kiwistron/KiwisIoT

💡 **KiwisIoT Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

These resources are helpful for exploring the platform, understanding the Arduino library, and learning how to build more IoT projects.

## About the Author

I'm an IoT enthusiast who enjoys building practical projects using microcontrollers, sensors, cloud platforms, and real-world automation ideas.

I share my projects to document what I build, what I learn, and to help others who are exploring IoT discover ideas, experiment with hardware, and develop their own projects.

If you find this project interesting, feel free to
