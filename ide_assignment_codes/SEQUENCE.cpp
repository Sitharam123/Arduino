#include<Arduino.h>
int x,y,o,p;
int q1=0,q2=0,q3=0,d1,d2,d3;

void disp7474(int o,int d1,int d2,int d3){

   digitalWrite(7,d1);
   digitalWrite(8,d2);
   digitalWrite(9,d3);
}

void setup(){
    
    pinMode(3,INPUT);   //q1
    pinMode(4,INPUT);   //q2
    pinMode(5,INPUT);   //q3
    pinMode(7,OUTPUT);  //d1
    pinMode(8,OUTPUT);  //d2 
    pinMode(9,OUTPUT);  //d3
    pinMode(10,INPUT);  // input
    pinMode(11,OUTPUT); //for output y
    pinMode(12,OUTPUT); // FOR CLOCK
}


void loop(){
   digitalWrite(12,LOW);
   delay(1000);
   x = digitalRead(10); //declaring x as input
   digitalWrite(12,HIGH);
   delay(1000);   
   q1= digitalRead(3);
   q2= digitalRead(4);																										
   q3= digitalRead(5);
   d1= (!q1&&q2&&q3&&x);
   d2= (!q1&&!q2&&q3&&x)||(!q1&&q2&&!q3&&x);
   d3= (!q1&&!x)||(!q1&&q2&&!q3)||(!q2&&!q3&&!x);
   y = (!q1&&q2&&q3&&x);                           
   disp7474(o,d1,d2,d3);

if  (y==1){
      digitalWrite(11,LOW);
  }
if (y==0){
      digitalWrite(11,HIGH);
  }
 }

