// C++ code
//
void setup()
{
  Serial.begin(9600);
  //input taking methods in different data types
  int a = Serial.parseInt();
  float a = Serial.parseFloat();
  String a = Serial.readString();
  char a = Serial.read();
  Serial.println(num);
}

void loop()
{

}