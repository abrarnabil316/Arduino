#include<Servo.h>

int trig=7,echo=5;
Servo servo1;
int distance(int trig, int echo);
void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  servo1.attach(8);
}

void loop()
{
  //servo1.write(0);
  Serial.println(distance(trig, echo));
  if(distance(trig, echo)<=30){
  	servo1.write(90);
    delay(2000);
  }else{
  	servo1.write(0);
  }
}
int distance(int trig, int echo){
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
	digitalWrite(trig, HIGH);
    delayMicroseconds(10);
  digitalWrite(trig, LOW);
  	
  int duration= pulseIn(echo, HIGH);
	int distance= (0.034*duration)/2;
  return distance;
}
