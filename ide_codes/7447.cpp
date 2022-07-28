#include<Arduino.h>
int Z=0,Y=1,X=1,W=1;
int D,C,B,A;
void disp_7447(int D,int C,int B,int A)
{
   digitalWrite(2,A);
   digitalWrite(3,B);
   digitalWrite(4,C);
   digitalWrite(5,D);
}
void setup()_{
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
}
void loop() {
   A=(!W&&!Z)||(!Y&&!X&&!W);
   B=(!Z&&!X&&W)||(!Z&&X&&!W);
   C=(!X&&!Z&&Y)||(!W&&!Z&&Y)||(!Z&&!Y&&X&&W);
   D=(Z&&!Y&&!X&&!W)||(!Z&&Y&&X&&W);
 disp_7447(D,C,B,A);
}
