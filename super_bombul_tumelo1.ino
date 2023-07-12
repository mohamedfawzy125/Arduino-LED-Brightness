// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{ 
  for(int i=0 ; i <=255 ; i++){
  analogWrite(9, i);
delay(500);
  } 
  for(int i=255 ; i >=0 ; i--){
 analogWrite(9, 255);
   delay(1000);
  }
}
