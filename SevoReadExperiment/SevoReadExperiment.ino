/*
This sketch is for validating the concept
*/
#include <Servo.h>

#define SERVOREAD A0
int rawServoPos = 0;
#define SERVOWRITE 8
int val = 0;
int estServoPos = 0;
Servo testServo;

void setup() {
  Serial.begin(9600);
  testServo.attach(8);
}


void loop() {
  // read servo position
  testServo.write(val);
  
  rawServoPos = analogRead(SERVOREAD);
  /*
   * Servo Write : Read
   * 0 : 61
   * 90 : 306
   * 180 : 550
   */
  estServoPos = map(rawServoPos, 60, 550, 0, 180);

  Serial.print("val:");
  Serial.print(val);
  Serial.print(" rawServoPos:");
  Serial.print(rawServoPos);
  Serial.print(" estServoPos:");
  Serial.print(estServoPos);
  Serial.print("\n");
  
  
  val = (val+2) % 180;
  delay(100);
}
