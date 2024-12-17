#include <Arduino.h>
#define PINLED 3

float i = 0;

void setup(){
  Serial.begin(9600);
  pinMode(PINLED,OUTPUT);
}

void loop()
{
  i += 0.1;

  // Print log
  Serial.print("casa");
  Serial.println(i);

  // Plot a sinus
  Serial.print(">sin:");
  Serial.println(sin(i));

  // Plot a cosinus
  Serial.print(">Sum:");
  Serial.println(0.8 * sin(i) + 0.2 * cos(i));

  delay(50);
}