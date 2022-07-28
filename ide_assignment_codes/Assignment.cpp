#include<Arduino.h>
int D,C,B,A;
int F;
void disp_F(int D,int C,int B,int A)
{
  digitalWrite(2,F);
}
void setup()
{
  pinMode(2,OUTPUT);
}
void loop()
{
  F=(!A&&C)||(A&&B&&!D)||(A&&B&&!C)
  disp_F(F);
}
