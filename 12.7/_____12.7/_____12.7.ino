#define MINANALOG 0
#define MAXANALOG 1023
#define MINSVM 0
#define MAXSVM 179

int nRedPin = 4;
int nYellowPin = 5;
int nGreenPin = 6;
int nDelay = 100;

#include <Servo.h>

Servo servo;
int potPin = 0;
int val;

void GenLEDDigitalOutput(int nNumPin, int nCmd, int nDelay)
{
  digitalWrite(nNumPin, nCmd);
  delay(nDelay);
}
void GenLEDAnalogOutput(int nNumPin, int nCmd, int nDelay)
{
  analogWrite(nNumPin, nCmd);
  delay(nDelay);
}

void setup()
{
 servo.attach(3);
 pinMode(nRedPin, OUTPUT);
 pinMode(nGreenPin, OUTPUT);
 pinMode(nYellowPin, OUTPUT);
 Serial.begin(9600);
};

void loop()
{
   int val = analogRead(potPin);
  val = map(val, MINANALOG, MAXANALOG, MINSVM, MAXSVM);
  servo. write(val);
  if((val >= 0) && (val < 90))
  {
   GenLEDDigitalOutput(nRedPin, HIGH, nDelay);
   GenLEDDigitalOutput(nRedPin, LOW, nDelay);
  }
  else if((val >= 90) && (val < 179))
  {
   GenLEDDigitalOutput(nYellowPin, HIGH, nDelay);
   GenLEDDigitalOutput(nYellowPin, LOW, nDelay);
  }
  else
  {
   GenLEDDigitalOutput(nGreenPin, HIGH, nDelay);
   GenLEDDigitalOutput(nGreenPin, LOW, nDelay);
  }
}
