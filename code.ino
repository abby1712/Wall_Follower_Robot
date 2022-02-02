int LMT1=6,LMT2=5,RMT1=11,RMT2=10;
int CS=A1, LS=A0, RS=A2,CSV,LSV,RSV;
void setup()
{
  pinMode(CS,INPUT);
  pinMode(LS,INPUT);
  pinMode(RS,INPUT);
  pinMode(LMT1,OUTPUT);
  pinMode(LMT2,OUTPUT);
  pinMode(RMT1,OUTPUT);
  pinMode(RMT2,OUTPUT);
}
void loop()
{
  
  CSV=digitalRead(A1);
  LSV=digitalRead(A0);
  if(LSV==LOW&&CSV==LOW)
  {
    slowleft();
  } 

  else if(LSV==HIGH&&CSV==LOW)
  {
    slowright();
  }
  else if(LSV==LOW&&CSV==HIGH)
  {
    right();
    delay(500);
  }
  else if(LSV==HIGH&&CSV==HIGH)
  {
    right();
    delay(500);
  }
  
}  
void fwd()
{
  digitalWrite(LMT1,HIGH);
  digitalWrite(LMT2,LOW);
  digitalWrite(RMT1,HIGH);
  digitalWrite(RMT2,LOW);
}
void back()
{
  digitalWrite(LMT1,LOW);
  digitalWrite(LMT2,HIGH);
  digitalWrite(RMT1,LOW);
  digitalWrite(RMT2,HIGH);
}
void left()
{
  digitalWrite(LMT1,LOW);
  digitalWrite(LMT2,HIGH);
  digitalWrite(RMT1,HIGH);
  digitalWrite(RMT2,LOW);
}
void right()
{
  digitalWrite(LMT1,HIGH);
  digitalWrite(LMT2,LOW);
  digitalWrite(RMT1,LOW);
  digitalWrite(RMT2,HIGH);
}
void slowleft()
{
  digitalWrite(LMT1,LOW);
  digitalWrite(LMT2,LOW);
  digitalWrite(RMT1,HIGH);
  digitalWrite(RMT2,LOW);
}
void slowright()
{
  digitalWrite(LMT1,HIGH);
  digitalWrite(LMT2,LOW);
  digitalWrite(RMT1,LOW);
  digitalWrite(RMT2,LOW);
}  
