const int button = 2;
const int LED = 3;
boolean flag = false;

void setup() 
{
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  if(digitalRead(button))
  {
    flag = !flag;
    delay(500);
    digitalWrite(LED, flag);
  }
  
  else
  {
    digitalWrite(LED, LOW);
  }
}
