// C++ code
//if else statement
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){
    char a = Serial.read();
    if (a == 'r' || a == 'R'){
      Serial.println("Today is Rainy Day");
    }else{
      Serial.println("Today is Sunny day");
    }
    delay(1000);
  }
}