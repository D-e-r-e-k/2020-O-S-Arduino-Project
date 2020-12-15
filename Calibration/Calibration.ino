/*
This sketch is for installying the motorhorn at the right angles
Make sure all three readings in the serial monitor is within 0-180 over the entire movement range.
*/
#include <Servo.h>

int val1 = 0;
int val2 = 0;

// Servo with green wire
#define GSERVOREAD A0
int rawGServoPos = 0;
#define GSERVOWRITE 8
int estGServoPos = 0;
Servo GServo;

// Servo with purple wire
#define PSERVOREAD A1
int rawPServoPos = 0;
#define PSERVOWRITE 9
int estPServoPos = 0;
Servo PServo;

// Servo with blue wire
#define BSERVOREAD A5
int rawBServoPos = 0;
#define BSERVOWRITE 10
int estBServoPos = 0;
Servo BServo;

void setup() {
  Serial.begin(9600);
  
//  GServo.attach(GSERVOWRITE);
//  PServo.attach(PSERVOWRITE);
//  BServo.attach(BSERVOWRITE);
}


void loop() {
  // read servo position
//  GServo.write(30);
//  PServo.write(val1+30);
//  BServo.write(val2+30);
  
  rawGServoPos = analogRead(GSERVOREAD);
  rawPServoPos = analogRead(PSERVOREAD);
  rawBServoPos = analogRead(BSERVOREAD);
  /*
   */
   
  estGServoPos = map(rawGServoPos, 60, 550, 0, 180);
  estPServoPos = map(rawPServoPos, 60, 550, 0, 180);
  estBServoPos = map(rawBServoPos, 60, 550, 0, 180);

  Serial.print("val1:");
  Serial.print(val1);
  
  // Serial.print(" rawGServoPos:");
  // Serial.print(rawGServoPos);
  Serial.print(" estGServoPos:");
  Serial.print(estGServoPos);

  // Serial.print(" | rawPServoPos:");
  // Serial.print(rawPServoPos);
  Serial.print(" | estPServoPos:");
  Serial.print(estPServoPos);

  // Serial.print(" | rawBServoPos:");
  // Serial.print(rawBServoPos);
  Serial.print(" | estBServoPos:");
  Serial.print(estBServoPos);
  Serial.print("\n");
  
//  val1 = (val1+2) % 120;
//  val2 = (val2+2) % 120;
  
  delay(100);
}
