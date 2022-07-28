#include <Arduino.h>
int A,B,C,D;
int a,b,c,d;
void disp_7447(int A,int  B, int C,int D){
digitalWrite(2,A);
digitalWrite(3,B);
digitalWrite(4,C);
digitalWrite(5,D);
}
 
void setup(){
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(13,OUTPUT);
}

void loop(){
digitalWrite(13,LOW);
a = digitalRead(6);
b = digitalRead(7);
c =digitalRead(8);
d = digitalRead(9);
digitalWrite(13,HIGH);
A = (a&&!b&&!c&&!d)||(!a&&b&&c&&d);
B = (!a&&!b&&c&&d)||(!a&&b&&!c)||(!a&&b&&!d);
C = (!a&&!c&&d)||(!a&&c&&!d);;
D = (!a&&!d)||(!d&&!c&&!b);
disp_7447(D,C,B,A);
delay(1000);
}

