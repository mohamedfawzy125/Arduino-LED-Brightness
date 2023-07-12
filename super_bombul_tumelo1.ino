// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(9, 50);
delay(500);

 analogWrite(9, 255);
   delay(1000);
}