void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<=100; i++)
  {
    if(i%3==0 || i%5==0)
    {
      Serial.println(i);
    }
    delay(500);
  }
}
