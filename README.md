# Arduino Ultrasonic Distance Sensor with Servo Control

## Overview

This Arduino project utilizes an ultrasonic distance sensor to control a servo motor. The system reacts to objects within a certain distance by adjusting the position of the servo motor. Additionally, it monitors analog sensor readings to reset the servo position under specific conditions.

## Table of Contents

- [Dependencies](#dependencies)
- [Setup Instructions](#setup-instructions)
- [Pin Configuration](#pin-configuration)
- [Configuration Variables](#configuration-variables)
- [Usage](#usage)
- [Troubleshooting](#troubleshooting)

## Dependencies

- Arduino Servo library

## Setup Instructions

1. **Connect the Hardware:**
   - Wire the ultrasonic sensor to the designated pins (`trigPin` and `echoPin`).
   - Connect the servo motor to the assigned control pin.

2. **Install Dependencies:**
   - Make sure to install the Arduino Servo library before uploading the code.

3. **Upload the Code:**
   - Use the Arduino IDE to upload the provided code to your Arduino board.

## Pin Configuration

- `trigPin`: 12 (output pin for the ultrasonic sensor)
- `echoPin`: 11 (input pin for the ultrasonic sensor)
- Servo control pin: 9

## Configuration Variables

- `dist`: Distance threshold for servo activation
- `sound`: Variable for controlling sound (please provide more details if necessary)

## Usage

1. Power up the Arduino with the connected hardware.
2. Observe the servo's behavior based on the distance and analog sensor readings.

## Troubleshooting

- If the servo behavior is unexpected, check the distance and analog sensor readings.
- Ensure that the Servo library is properly installed.

