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
  Robot.beginSpeaker();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (detectMovement())
  {
    actionOnDetect();

  }
  else
  {
    sentinel();
  }

}

void actionOnDetect() {
  alertDetected();
  acquireTarget();
  alertLockedOn();
  moveToTarget();
  alertAtTarget();
}

void alertDetected() {
  Robot.beep(BEEP_SIMPLE);
  delay(1000);
}

void sentinel() {
  delay(10);
}

void acquireTarget() {
  
}

void alertLockedOn() {

}

void moveToTarget() {
}

void alertAtTarget() {
}

int detectMovement() {
  int sensorValue = Robot.digitalRead(sensor);
  return sensorValue; 
}
