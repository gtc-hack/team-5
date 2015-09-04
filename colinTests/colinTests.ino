// include the robot library
#include <ArduinoRobot.h>
#include <Wire.h>
#include <SPI.h>

int sensor = M1;  //pin used by sensor

void setup() {
  // initialize the Robot, SD card, and display
  Serial.begin(9600);
  Robot.begin();
  Robot.beginTFT();
  Robot.beginSD();
  Robot.displayLogos();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (detectMovement())
  {
    alertDetected();
  }
  else
  {
    sentinel();
  }

}

void alertDetected() {
  delay(10);
}

void sentinel() {
  delay(10);
}

int detectMovement() {
  int sensorValue = Robot.digitalRead(sensor);
  return sensorValue; 
}
