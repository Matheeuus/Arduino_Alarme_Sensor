// C++
//
int time = 0;
void setup()
{
  Serial.begin(9600);
	pinMode(6, OUTPUT);
}

void loop()
{
  int valorLido = analogRead(A0);
  if(valorLido > 0){
    //time = 1000 * 10 = 10000 corresponde a 10 segundos
    while(time <= 10000){
      digitalWrite(6, HIGH);
      tone(7, 1000);
      delay(500);
      digitalWrite(6, LOW);
      noTone(7);
      delay(500);
      time+= 1000;
    }
    time = 0;
  }
  Serial.println(valorLido);
}