# Cloud-Based Wireless Temperature Monitoring System for Concrete Blocks

## Overview

This project is based on the development of a **cloud-based wireless temperature monitoring system** for concrete blocks to assess the temperature's impact on **reinforced concrete (RC) members**. The system uses **ESP8266** for wireless data transmission and **cloud storage** to monitor and analyze temperature data over time.

## Features

- **Real-time monitoring** of temperature in concrete blocks.
- **Wireless communication** using the ESP8266 module.
- **Cloud-based storage** for easy access to data via a web interface.
- **Finite Element Analysis (FEA)** of the impact of temperature fluctuations on RC beam performance.

## Components Used

- **ESP8266 NodeMCU** for Wi-Fi connectivity.
- **DS18B20 Temperature Sensors** to measure the temperature inside the concrete blocks.
- **PHP & MySQL** for the backend and storing the temperature data.
- **LiteSpeed Web Server** for hosting the cloud-based platform.

## Setup Instructions

1. **Hardware Setup**:
   - Use a **NodeMCU** ESP8266 board for wireless communication.
   - Connect **DS18B20 temperature sensors** to the ESP8266.

2. **Software Setup**:
   - Install the necessary libraries for **DS18B20** in Arduino IDE.
   - Upload the provided **ESP8266 code** to the board.

3. **Cloud Setup**:
   - Set up a **web server** with **LiteSpeed**.
   - Create a **MySQL database** to store the temperature data.
   - Configure the web interface to view the real-time data.

4. **Testing**:
   - Power up the system and start collecting data from the sensors.
   - Access the cloud to monitor the temperature fluctuations in real time.

## Results

The system successfully demonstrated:
- **Temperature Monitoring**: Real-time tracking of temperature changes in concrete.
- **Impact on RC Members**: Simulated crack formation and expansion based on temperature fluctuations.

## Future Work

- Integrate **machine learning** for predictive analysis based on collected temperature data.
- Expand the system to monitor additional parameters like humidity and strain.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
