#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);  // address 0x27, 16 column and 2 rows

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(5,1);
  lcd.print("Created by");
  lcd.setCursor(2,2);
  lcd.print("Ben Kazakevicius");
}


void loop()
{
}
