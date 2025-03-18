#include <Arduino.h>

const int potentiometer = A0;

int speed = 255;
int pin1 = 5;
int pin2 = 6;

void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(potentiometer, INPUT);
}

void loop()
{
  int potenciometerValue = analogRead(potentiometer);

  speed = map(potenciometerValue, 0, 1023, 100, 255);

  analogWrite(pin1, speed);
  digitalWrite(pin2, LOW);

  delay(1000);
}