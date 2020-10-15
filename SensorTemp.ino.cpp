#include <Arduino.h>
#line 1 "C:\\Users\\Thaís\\Documents\\Arduino\\SensorTemp\\SensorTemp.ino"
#line 1 "C:\\Users\\Thaís\\Documents\\Arduino\\SensorTemp\\SensorTemp.ino"
void setup();
#line 6 "C:\\Users\\Thaís\\Documents\\Arduino\\SensorTemp\\SensorTemp.ino"
void loop();
#line 1 "C:\\Users\\Thaís\\Documents\\Arduino\\SensorTemp\\SensorTemp.ino"
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  float v;
  v=analogRead(A0);
float voltaje = v*(5.0/1023.0);
float t= voltaje/0.0595238;
Serial.print("Temperatura = ");
Serial.print(t);
Serial.println(" C");
delay(500);
}

