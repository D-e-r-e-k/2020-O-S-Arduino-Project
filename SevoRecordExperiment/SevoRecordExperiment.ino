/*
This sketch is for validating the concept
Solution inspired by: https://www.youtube.com/watch?v=QR_Oo8hpsL4&feature=youtu.be
*/
#include <Servo.h>

#define SERVOREAD A0
int rawServoPos = 0;

#define SERVOWRITE 8

int estServoPos = 0;

// Sampling frequency
#define SF 30
// Roughly enough mem for 1800 Length
#define MAXRECORDLENGTH 300
unsigned char recordedPos[MAXRECORDLENGTH];
int recordLength = 0;

Servo testServo;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // light when Recording
}


void loop() {
  Record();
  Play();

  delay(1000);
}

bool EndRecord() {
  return false;
}

void Record() {
  digitalWrite(LED_BUILTIN, HIGH);
  int i = 0;
  for (; i<MAXRECORDLENGTH && !EndRecord(); i++) {
    
    rawServoPos = analogRead(SERVOREAD);
    estServoPos = map(rawServoPos, 60, 550, 0, 180);
    recordedPos[i] = estServoPos;
    
    delay(1000/SF);
  }
  recordLength = i;
  digitalWrite(LED_BUILTIN, LOW);
}

void Play() {
  testServo.attach(8);
  for (int i = 0; i<recordLength; i++) {
    testServo.write(recordedPos[i]);
    delay(1000/SF);
  }
  testServo.detach();
}
