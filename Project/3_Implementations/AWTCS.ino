#include <NewPing.h>
#include <Servo.h>
#define triPin 12
#define echoPin 13
#define MAX_DISTANCE 50
NewPing sonar(triPin, echoPin, MAX_DISTANCE);
int LEDgreen = 3, LEDred = 2;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  pinMode(triPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDred, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
int duration,distance,posisi=0,i;
  digitalWrite(triPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triPin, HIGH);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/29.1;
    Serial.print(distance);
    Serial.println(" cm");
if(distance<=5.0)
  {
    digitalWrite(LEDred, LOW);
    digitalWrite(LEDgreen, HIGH);
    myservo.write(180);
}
  else{
    digitalWrite(LEDgreen, LOW);
      digitalWrite(LEDred, HIGH);
      myservo.write(90);
  }
  delay(450);

  

}
