const int in = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(in, INPUT);
  for(int i=3; i < 11; i++){
  	pinMode(i, OUTPUT);
  }
  attachInterrupt(digitalPinToInterrupt(2), changeLed, CHANGE);
}

void loop()
{
  Serial.println(analogRead(in));
}

void changeLed(){
  // até onde eu sei NENHUM desses digitalRead eram pra funcionar, 
  // mas se ta funcionando quem vai reclamar né?
  switch(analogRead(in)){
    case(189):
      digitalWrite(3, !digitalRead(3));
  	break;
    case(197):
      digitalWrite(4, !digitalRead(4));
  	break;
    case(207):
      digitalWrite(5, !digitalRead(5));
  	break;
    case(218):
      digitalWrite(6, !digitalRead(6));
  	break;
    case(230):
      digitalWrite(7, !digitalRead(7));
  	break;
    case(243):
      digitalWrite(8, !digitalRead(8));
  	break;
    case(258):
      digitalWrite(9, !digitalRead(9));
  	break;
    case(274):
      digitalWrite(10, !digitalRead(10));
  	break;
    case(293):
      allLow();
    break;
  }
}

void allLow(){
  for(int i=3; i < 11; i++){
  	digitalWrite(i, LOW);
  }
}
