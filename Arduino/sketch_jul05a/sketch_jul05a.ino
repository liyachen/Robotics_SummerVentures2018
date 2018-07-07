const int light = A0;
float Voltage;
const int pwm = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pwm, OUTPUT);
}

void loop() 
{
  float v = analogRead(light);
  Voltage = (5.0/1023)*v;
  Serial.println(Voltage);
  for(int i; i<=255; i++)
  {
   analogWrite(pwm, i);
   delay(100);
  }
}
