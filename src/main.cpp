#include <Arduino.h>


void setup() {
  Serial.begin(9600);
  Serial.println("Hello, World!");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(250);                     
  digitalWrite(LED_BUILTIN, LOW);   
  delay(250);          

}
