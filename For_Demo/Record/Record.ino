/*
This sketch is for val11idating the concept
*/
#include <Servo.h>

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

// Sampling frequency
#define SF 30
// Roughly enough mem for 600 Length
#define MAXRECORDLENGTH 550

unsigned char recordedGPos[MAXRECORDLENGTH];
unsigned char recordedPPos[MAXRECORDLENGTH];
unsigned char recordedBPos[MAXRECORDLENGTH];

int recordLength = 0;

void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT); // light when Recording

}


void loop() {
  Record();
  Play();
  
  delay(2000);
}

bool EndRecord() {
  return false;
}

void Record() {
  digitalWrite(LED_BUILTIN, HIGH);
  
  int i = 0;
  for (; i<MAXRECORDLENGTH && !EndRecord(); i++) {
    
    rawGServoPos = analogRead(GSERVOREAD);
    estGServoPos = map(rawGServoPos, 60, 550, 0, 180);
    recordedGPos[i] = estGServoPos;

    rawPServoPos = analogRead(PSERVOREAD);
    estPServoPos = map(rawPServoPos, 60, 550, 0, 180);
    recordedPPos[i] = estPServoPos;

    rawBServoPos = analogRead(BSERVOREAD);
    estBServoPos = map(rawBServoPos, 60, 550, 0, 180);
    recordedBPos[i] = estBServoPos;
    
    delay(1000/SF);
  }
  recordLength = i;

  PrintRecord(recordedGPos);
  PrintRecord(recordedPPos);
  PrintRecord(recordedBPos);
  Serial.print("\n");
  
  digitalWrite(LED_BUILTIN, LOW);
}

void PrintRecord(unsigned char r[]){
  Serial.print("{ ");
  for(int i=0; i< MAXRECORDLENGTH-1; i++) {
    Serial.print(r[i]);
    Serial.print(", ");
  }
  Serial.print(r[MAXRECORDLENGTH-1]);
  Serial.print(" };\n");
}

void Play() {
    
  GServo.attach(GSERVOWRITE);
  PServo.attach(PSERVOWRITE);
  BServo.attach(BSERVOWRITE);
  
  for (int i = 0; i<recordLength; i++) {
    
    GServo.write(recordedGPos[i]);
    PServo.write(recordedPPos[i]);
    BServo.write(recordedBPos[i]);
    
    delay(1000/SF);
  }
  
  GServo.detach();
  PServo.detach();
  BServo.detach();
}
