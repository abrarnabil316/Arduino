int relay= 6;
int motion= 8;
void setup()
{
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(motion, INPUT);
}

void loop()
{
  if(digitalRead(motion)==HIGH){
  Serial.println("motion detected");
  digitalWrite(relay, HIGH);
  }else{
    Serial.println("No motion detected");
    digitalWrite(relay, LOW);
  }
}
