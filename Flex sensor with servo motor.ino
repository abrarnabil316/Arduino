// C++ code
//Flex sensor with servo motor
#include<Servo.h>

int sensor = A0;
int servo_pin=7;

Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(servo_pin);
}

void loop()
{
  myServo.write(angle());
  Serial.println(angle());
}
int angle(){
	int sensor_value=analogRead(A0);
    int angle= map(sensor_value,682,275,0,180);
  	//Serial.println(sensor_value);
  	return angle;
}