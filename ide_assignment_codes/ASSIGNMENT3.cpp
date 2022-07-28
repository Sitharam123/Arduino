#include <Arduino.h>
int x=1,B=0,A=1;
int C,D;
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  digitalWrite(6,e);
  digitalWrite(7,f);                                                                                                                                 
  digitalWrite(8,g);
}
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}
void loop()
{
  C=(x&&!A)||(!B&&A);
  if (C==0){
     sevenseg(0,0,0,0,0,0,1);
  }
  else{
     sevenseg(1,0,0,1,1,1,1);
  }
  delay(1000);
  D=(x&&!B)||(A&&B);
  if (D==0){
     sevenseg(0,0,0,0,0,0,1);
  }
  else{
     sevenseg(1,0,0,1,1,1,1);
  }
  delay(1000);
}
