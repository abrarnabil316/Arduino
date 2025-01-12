// C++ code
//temperature sensor with buzzer
int temp_pin= A0;
int buzzer_pin= 9;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer_pin, OUTPUT);
  
}

void loop()
{
  int temp= temperature();
  Serial.println(temp);
  if(temp>=90 || temp<= 0){
  	digitalWrite(buzzer_pin, HIGH);
    Serial.println("Danger, go to some shelter");
  }else{
  	digitalWrite(buzzer_pin, LOW);
  }
}
int temperature(){
	int t = analogRead(temp_pin);
    return map(t,20,358,-40,125);
}
