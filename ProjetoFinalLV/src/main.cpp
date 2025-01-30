#include <Arduino.h>
#include <SPI.h>                  // Include SPI library for communication with RFID module
#include <MFRC522.h>              // Include MFRC522 library for RFID
#include <LiquidCrystal_I2C.h>    // Include LiquidCrystal_I2C library for LCD
#include <Wire.h>                 // Include Wire library for I2C communication
#include <Servo.h>           // Include the ESP32 Arduino Servo Library instead of the original Arduino Servo Library

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  printf("penis");
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}