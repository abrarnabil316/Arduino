// C++ code
//MOtor control

int p=10,n=11;

void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  //digitalWrite(p,HIGH);
  //digitalWrite(n,LOW);
  
  analogWrite(p, 155);
  analogWrite(n, 0);
  delay(2000);
  analogWrite(p, 0);
  analogWrite(n, 255);
  delay(2000);
}