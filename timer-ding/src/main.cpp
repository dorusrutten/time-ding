#include <Arduino.h>
#include <stdio.h>

int timer1;
int timer2;

float Time;

int flag1 = 0;
int flag2 = 0;

float distance = 1.6;

float speed;

int ir_s1 = 22;
int ir_s2 = 23;


void setup(){
  Serial.begin(9600);
  pinMode(ir_s1, INPUT);
  pinMode(ir_s2, INPUT);
}
  void loop()
{
if(digitalRead (ir_s1) == LOW && flag1==0){timer1 = millis(); flag1=1;}//read sensor 1
if(digitalRead (ir_s2) == LOW && flag2==0){timer2 = millis(); flag2=1;}//read sensor 2
  
if (flag1==1 && flag2==1){
     if(timer1 > timer2){Time = timer1 - timer2;}
else if(timer2 > timer1){Time = timer2 - timer1;}
 Time=Time/1000;//convert millisecond to second
 speed=(distance/Time);//v=d/t
 speed=speed*3600;//multiply by seconds per hr
 speed=speed/1000;//division by meters per Km
}

if(speed==0)
{ 
  if(flag1==0 && flag2==0)
    {
    Serial.println ("wachten...")
    }
  else{Serial.println ("..");}}
  if(flag1==1 && flag2==1){
  Serial.println(speed);
      delay(1000);
       speed = 0;
       flag1 = 0;
       flag2 = 0;
      delay(10000);
 }
  }


