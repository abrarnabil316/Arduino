// C++ code
//MOtor control

int sensor = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int force= analogRead(sensor);
  Serial.println(force);
}