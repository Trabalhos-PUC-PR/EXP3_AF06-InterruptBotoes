const int in = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(in, INPUT);
  for(int i=4; i < 10; i++){
  	pinMode(i, OUTPUT);
  }
  attachInterrupt(digitalPinToInterrupt(2), changeLed1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(3), changeLed2, CHANGE);
}

void loop()
{
  // ----- DEBUG
  Serial.println(analogRead(in));
  Serial.println(digitalRead(2));
  Serial.println(digitalRead(3));
}

void changeLed1(){
  // até onde eu sei NENHUM desses digitalRead eram pra funcionar, 
  // mas se ta funcionando quem vai reclamar né?
  switch(analogRead(in)){
    case(281):
      digitalWrite(4, !digitalRead(4));
  	break;
    case(293):
      digitalWrite(5, !digitalRead(5));
  	break;
    case(306):
      digitalWrite(6, !digitalRead(6));
  	break;
  }
}

void changeLed2(){
  switch(analogRead(in)){ 
  	case(321):
      digitalWrite(7, !digitalRead(7));
  	break;
    case(336):
      digitalWrite(8, !digitalRead(8));
  	break;
    case(353):
      digitalWrite(9, !digitalRead(9));
    break;
  }
}
