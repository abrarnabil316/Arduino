// C++ code
//Flex sensor

int sensor = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 // int angle_value= angle();
  Serial.println(angle());
}
int angle(){
	int sensor_value=analogRead(A0);
    int angle= map(sensor_value,682,275,0,180);
  	//Serial.println(sensor_value);
  	return angle;
}