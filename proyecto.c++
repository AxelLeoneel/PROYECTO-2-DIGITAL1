//Codigo Esclavo:
#include <Servo.h>
#include <LiquidCrystal_I2C.h>

const int pinservo1 = 9;
const int pinservo2 = 10;

Servo servo1;
Servo servo2;

LiquidCrystal_I2C lcd_1(0x27, 16, 2);

void setup() {
    
}