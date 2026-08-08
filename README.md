# Ulrtasonic Distance Meter with Arduino
## About the Project

This project is an Arduino-based ulstasonic disatnce measurement system.
An HC-SR04 ultrasonic sensor is used to measure the distance to an object, and the measured distance is displayed on a 16x2 I2C LCD.
I developed this project as part of my Arduino learning process to understande ultrasonic distance measurment,sensor communication, and LCD interfacing.

## Components
-Arduino Uno
-HC-SR04 Ultrasonic Distance Sensor 
- 16x2 I2C LCD
- Breadboard
- Jumper wires

##Circuit Connections

##HC-SR04 
| HC-SR04 Pin | Arduino Uno|
|---|---|
| VCC | 5V |
| GND | GND |
|TRIG |Digital Pin 9 |
|ECHO |Digital Pin 10 |

##16X2 I2C LCD


| LCD Pin | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |


## How It Works

1. The Arduino  sends a short trigger pulse to the HC-SR04.
2. The sensor sends an ultrasonic sound wave.
3. The sound wave travels  to the object and reflects back to the sensors.
4. The Arduino measures  the time required for the echo to return.
5. The measured time is converted into distance using  the speed of sound.
6. The calculated distance is displayed on the I2C LCD.
7. The distance is also printed to the Serial Monitor.

## Distance Calculation
The HC-SR04 measures the total travel time of the ultrasonic wave including  both the outgoing and returning paths.
The distance  is calculated using:

`distance = duration ×  / 2`

The value `0.0343`  represents the approximate speed of sound in air in cm/µs.
The result is divided by 2 because the measured  time  includes both the distance from  the sensor to the object and  the return distance.

## What I Learned

Through this project, I learned about:

- Arduino digital input and output pins
- The difference between INPUT and OUTPUT
- HC-SR04 ultrasonic distance measurement
- `digitalWrite()`
- `pinMode()`
- `pulseIn()`
- `delayMicroseconds()`
- Serial communication with `Serial.begin()`
- I2C communication
- 16x2 I2C LCD control
- Converting time measurements into distance
- Reading and understanding Arduino code

## Learning Note
This project was developed as a learning exercise. I studied an existing HC-SR04 Arduino example,rebuilt  the circuit my own components,and analyzed the code to  understand how each part works.

##Future Improvements
Possible improvements for this project include:

-Adding an RGB LED  to indicate different  distance ranges
-Adding a buzzer for close objects
- Displaying  distance in both centimeters and inches
- Improving the LCD interface
- Adding more advanced distance-based functions




