int leftSwitch = 2;
int leftLight = 3;
int buzzer = 6;
int Red = 8;
int Green = 9;
int Blue = 10;
int rightLight = 4;
int rightSwitch = 13;

bool buttonPressed = 0;

void setup() {
    Serial.begin(9600);
  
    pinMode(leftSwitch,INPUT_PULLUP);
    pinMode(leftLight,OUTPUT);
  
    pinMode(buzzer,OUTPUT);
  
    pinMode(Red,OUTPUT);
    pinMode(Green,OUTPUT);
    pinMode(Blue,OUTPUT);
  
    pinMode(rightLight,OUTPUT);
    pinMode(rightSwitch,INPUT_PULLUP);
  
    randomSeed(analogRead(A0));
}

void loop() {
  digitalWrite(Red,HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(Red, LOW);

  digitalWrite(Green,HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(Green, LOW);

  digitalWrite(Blue,HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(random(900, 4901));
  digitalWrite(Blue, LOW);

  while(buttonPressed == 0){
    digitalWrite(leftLight, HIGH);
    digitalWrite(rightLight, HIGH);
    
    if(digitalRead(leftSwitch) == 0){
      digitalWrite(rightLight, LOW);
      buttonPressed = 1;
    }
    else if(digitalRead(rightSwitch) == 0){
      digitalWrite(leftLight, LOW);
      buttonPressed = 1;
    }
  }
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1500);
  digitalWrite(leftLight, LOW);
  digitalWrite(rightLight, LOW);
  buttonPressed = 0;
}
