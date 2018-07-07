//const int light = A0;
float voltage;
const int pwm = 3;


void setup() {
  Serial.begin(9600);
  pinMode(pwm, OUTPUT);
}


void loop() 
{
  int v = analogRead(A0);
  voltage = (5.0/1023)*v;
  Serial.println(voltage);
 /*for(int i; i<=255; i++)
  {
   analogWrite(pwm, i);
   delay(10);
  }*/

  int dc = my_map(voltage, 0, 1, 0, 255); 
  analogWrite(pwm, dc);
}


int my_map(float voltage, float lower_voltage, float upper_voltage, int lower_dc, int upper_dc)
{
 int m = round((upper_dc - lower_dc) / (upper_voltage - lower_voltage));
 int b = round(255 - (m * (upper_voltage)));
 int y = round((m * voltage) + b);
 
 if(y<=lower_dc)
 {
  y = lower_dc;
 }

 else if (y>= upper_dc)
 {
  y = upper_dc;
 }
 return(y);
}
