//Codigo Esclavo:
#include <Servo.h>
#include <LiquidCrystal_I2C.h>

const int pinservo1 = 9;
const int pinservo2 = 10;

Servo servo1;
Servo servo2;

LiquidCrystal_I2C lcd_1(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd_1.backlight();
  servo1.attach(pinservo1);
  servo2.attach(pinservo2);
  lcd_1.begin(16, 2);
  lcd_1.setCursor(0, 0);
  lcd_1.print("Servo 1: ");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Servo 2: ");
}

void loop(){
    if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    int commaIndex = data.indexOf(',');
    if (commaIndex > 0) {
      String poten1Str = data.substring(0, commaIndex);
      String poten2Str = data.substring(commaIndex + 1);

      int poten1 = poten1Str.toInt();
      int poten2 = poten2Str.toInt();
    }
    }
}