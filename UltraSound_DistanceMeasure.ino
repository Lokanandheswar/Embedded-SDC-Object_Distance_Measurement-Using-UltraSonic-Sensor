#include <SoftwareSerial.h>

const int trigPin=12;
const int echoPin=11;
long duration,inches,distance;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.print("Distance Measurement");
  delay(1000);
}

void loop() {
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.print("cm");
  delay(100);
  Serial.println();
}
