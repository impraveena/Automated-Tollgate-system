#include <Servo.h>
#define trigPin 12
#define echoPin 11
Servo servo;
int sound = 250;
int dist = 50;
void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
servo.attach(9);
servo.write(0);
}
void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if(distance<dist){
  servo.write(90);
}
if(analogRead(A0)>1000 || analogRead(A0) <50 || analogRead(A1) >1000 || analogRead(A1)<50){
  servo.write(0);
}
delay(500);
}
