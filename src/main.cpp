#include <Arduino.h>
#include <Motor.h>

#define potentiometer A0

int value = 255;

Motor motor;

void setup()
{
  motor.PinOut(5, 6);
  pinMode(potentiometer, INPUT);
  Serial.begin(115200);
}

void loop()
{
  int potenciometerValue = analogRead(potentiometer);

  value = map(potenciometerValue, 0, 1023, 100, 255);

  motor.Speed(value);
  motor.Forward();

  Serial.print("Value: ");
  Serial.println(value);
  Serial.println("Potentiometer Value: ");
  Serial.println(potenciometerValue);
  delay(1000);
}