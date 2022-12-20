#define MINANALOG 0
#define MAXANALOG 1023
#define MINSVM 0
#define MAXSVM 179
#define MINPWM 0
#define MAXPWM 255

int nWhitePin = 4;
int nYellowPin = 5;
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
 pinMode(nWhitePin, OUTPUT);
 pinMode(nYellowPin, OUTPUT);
 Serial.begin(9600);
};

void loop()
{
   int val = analogRead(potPin);
  val = map(val, MINANALOG, MAXANALOG, MINSVM, MAXSVM);
  if((analogRead(potPin)>=250) && (analogRead(potPin)< 500))
  {
   GenLEDDigitalOutput(nWhitePin, 40, nDelay);
   GenLEDDigitalOutput(nYellowPin, 40, nDelay);
   servo. write(60);
  }
  else if((analogRead(potPin)>=500) && (analogRead(potPin)< 750))
  {
   GenLEDDigitalOutput(nWhitePin, 130, nDelay);
   GenLEDDigitalOutput(nYellowPin, 130, nDelay);
   servo. write(120);
  }
  else if((analogRead(potPin)>= 700) && (analogRead(potPin)<= 1023))
  {
   GenLEDDigitalOutput(nWhitePin, 255, nDelay);
   GenLEDDigitalOutput(nYellowPin, 255, nDelay);
   servo. write(179);
  }
  else
  {
   GenLEDDigitalOutput(nWhitePin, LOW, nDelay);
   GenLEDDigitalOutput(nYellowPin, LOW, nDelay);
   servo. write(0);
  }
}
