# Title : Automatic Water Tank Control System using Arduino

## Abstract 
This project is simulation project . For designing this project we used simulIDE. And for compilation of c language code we used ArduinoIDE . In this project we can automatically control ths water supply tant in our home. In this project is done by using Arduino. I used Ultrasonic Sensor for measuring water tank . I used Servo motor for opening and closing valve . 
## SOFTWARE USED
*SIMULIDE:*
SimulIDE is a simple real time electronic circuit simulator, intended for hobbyist or students to learn and experiment with simple electronic circuits and                      microcontrollers, supporting PIC, AVR and Arduino.
*ARDUINO:*
Arduino  is an open-source hardware and software company, project, and user community that designs and manufactures single-board microcontrollers and microcontroller            kits for building digital devices.
## COMPONENTS USED
### AURDINO UNO:
    1 The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller.
    2 The board has 14 digital I/O pins , 6 analog I/O pins, and is programmable with the Arduino IDE.
    3 The board is equipped with sets of digital and analog input/output pins that may be interfaced to various expansion boards and other circuits.
  ### ULTRASONIC SENSOR:
    1 Ultrasonic sensors are devices that generate or sense ultrasound energy. 
    2 They can be divided into three broad categories: transmitters, receivers and transceivers.
    3 Transmitters convert electrical signals into ultrasound, receivers convert ultrasound into electrical signals, and transceivers can both transmit and receive ultrasound.
 ### SERVO MOTOR: 
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
## Behavioral Diagrams
### Circuit Diagram
![circuit_diagram](https://user-images.githubusercontent.com/98832647/157040533-be914548-cc13-408b-8211-1b249f28dbf0.png)

<hr style="border:2px solid black">

### Flowchart
![Flowchart](https://user-images.githubusercontent.com/98832647/157054605-39babd6c-9b5c-4a20-940d-2adc26378d58.png)
## Structural Diagrams
### Block Diagram
![Block_diagram](https://user-images.githubusercontent.com/98832647/155829963-069490ff-8a31-412b-8353-048190e6a296.png)
## Code
![Code1](https://user-images.githubusercontent.com/98832647/157169824-07fed75e-839a-4536-983e-29f31b2ac7ee.png)
![code2](https://user-images.githubusercontent.com/98832647/157169791-60c8026e-0c4f-499e-b7c7-b4b30cb4899b.png)
## Simulation 
![Simulation](https://user-images.githubusercontent.com/98832647/157172709-5624e750-6836-4b2c-932b-df021905af06.png)
## Output
### Open valve
![Open](https://user-images.githubusercontent.com/98832647/157172742-6d9bf415-04a5-48f5-9b92-bdc76d8c75b0.png)
### Close valve
![Close](https://user-images.githubusercontent.com/98832647/157172788-36fa9cc7-a015-46f2-940d-636f436d4d94.png)
## Test Plan And Output

|Test ID |   Discription      | Exp I/P |  Exp O/P     | Actual Output | Pass or Fail  |
|--------|--------------------|---------|--------------|---------------|---------------|
|  T_01  |  if water at level 0 |distance = 0|Open valve and Led green|Open valve and Led green|     Pass      |
|  T_02  |  if water at level 2 |distance = 2|Open valve and Led green|Open valve and Led green|     Pass      |
|  T_03  | if water at level 3.5|distance = 3.5|Open valve and Led green|Open valve and Led green|     Pass      |
|  T_04  | if water at level 4.9 |distance = 4.9|Open valve and Led green|Open valve and Led green|     Pass      |
|  T_05  | if water at level 5|distance = 5|close valve and Led red|close valve and Led red|     Pass      |
|  T_06  | if water at level 6|distance = 6|close valve and Led red|close valve and Led red|     Pass      |
|  T_07  | if water at level 9|distance = 7|close valve and Led red|close valve and Led red|     Pass      |

**Test plan** Doucmentation is created and output is captured for every possible level Requirements in test case and **verified succesfully.**
