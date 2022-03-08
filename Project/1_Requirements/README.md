# Title : Automatic Water Tank Control System using Arduino

## Abstract 
This project is simulation project . For designing this project we used simulIDE. And for compilation of c language code we used ArduinoIDE . In this project we can automatically control ths water supply tant in our home. In this project is done by using Arduino. I used Ultrasonic Sensor for measuring water tank . I used Servo motor for opening and closing valve . 
## SOFTWARE USED
*SIMULIDE:*
SimulIDE is a simple real time electronic circuit simulator, intended for hobbyist or students to learn and experiment with simple electronic circuits and                      microcontrollers, supporting PIC, AVR and Arduino.
*ARDUINO:*
Arduino  is an open-source hardware and software company, project, and user community that designs and manufactures single-board microcontrollers and microcontroller            kits for building digital devices.
## COMPONENTS USED
 ### AURDINO UNO: ![UNO](https://user-images.githubusercontent.com/98832647/155835314-20167ece-4b9f-443e-8ec8-ce2d1eef605e.jpg)
    1 The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller.
    2 The board has 14 digital I/O pins , 6 analog I/O pins, and is programmable with the Arduino IDE.
    3 The board is equipped with sets of digital and analog input/output pins that may be interfaced to various expansion boards and other circuits.
  ### ULTRASONIC SENSOR:![ultrasonic](https://user-images.githubusercontent.com/98825305/155834347-4e81f3e8-27a9-4b02-acda-a7eb291d01d8.jpg)
    1 Ultrasonic sensors are devices that generate or sense ultrasound energy. 
    2 They can be divided into three broad categories: transmitters, receivers and transceivers.
    3 Transmitters convert electrical signals into ultrasound, receivers convert ultrasound into electrical signals, and transceivers can both transmit and receive ultrasound.
 ### SERVO MOTOR: ![servo motor](https://user-images.githubusercontent.com/98832647/155835447-06284e4e-3032-40f1-b32f-7e944800b643.jpeg)
    1 A servomotor  is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration.
    2 It consists of a suitable motor coupled to a sensor for position feedback. 
## Requirements 
### Highlevel Requirements
|  ID  |   Discription  |status|
|------|----------------|------|
| HR_01| Arduino UNO    |Implemented|
| HR_02| Ultrasonic Sensor|Implemented|
| HR_03| Servo Motor |Implemented|
| HR_04| C Language |Implemented|
| HR_05| simulIDE |Implemented|

### LowLevel Requirements
|  ID  |   Discription  | HR-ID |Status|
|------|----------------|-------|------|
| LR_01|  Green Led(while close valve) | HR_01 |Implemented|
| LR_02|  Red Led(While close valve) | HR_01 |Implemented|
| LR_03|  Potentiometer(for measuring water tank) | HR_02 |Implemented|
| LR_04|  Open valve | HR_03|Implemented|
| LR_05|  Close valve| HR_03|Implemented|
| LR_06|  Jumper wires|     |Implemented|
## 4W'S & 1H 
### WHO
1 The project can be used almost by all the particular organization people.At the end,user satisfaction is the goal of the project.
### WHAT
1 By this project we can check the water level .
### WHEN
1 This can be used to check the level of water .
### WHERE
1  This can be used in Water tanks.
### HOW
This code is designed in such a way that we have to give certain input value upto which the water level is accepted (Threshold). when ever the water reaches the certain level it detects .It will detect by the Ultrasonic sensor which is having transmitter and reciever .If water reaches threshold it detects and elerts us.
## SWOT 
![SWOT](https://user-images.githubusercontent.com/98832647/157196123-3b721e22-e58e-4964-9243-95d4506527d1.png)
