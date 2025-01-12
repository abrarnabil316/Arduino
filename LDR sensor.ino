// C++ code
//LDR sensor
int light= 10;
void setup()
{
  Serial.begin(9600);
  pinMode(light, OUTPUT);
  
}

void loop()
{
  int sensor= analogRead(A0);
  Serial.println(sensor);
  if(sensor<=350){
  	digitalWrite(light, HIGH);
  }else{
  	digitalWrite(light, LOW);
  }
}
/*void led(sensor){
  if(sensor<=350){
    Serial.println("Its night");
  }else{
  	Serial.println("Its day");
  }
}*/