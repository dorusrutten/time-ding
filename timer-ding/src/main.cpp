#include <Arduino.h>
#include <stdio.h>

int timer1;
int timer2;
int timer3;
int timer4;
int timer5;
int timer6;
int timer7;
int timer8;
int timer9;
int timer10;
int timer11;
int timer12;
int timer13;
int timer14;
int timer15;
int timer16;
int timer17;
int timer18;
int timer19;
int timer20;

float Time;
float Time2;
float Time3;
float Time4;
float Time5;
float Time6;
float Time7;
float Time8;
float Time9;
float Time10;
float Time11;
float Time12;
float Time13;
float Time14;
float Time15;
float Time16;
float Time17;
float Time18;
float Time19;
float Time20;

//20 flags
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;
int flag4 = 0;
int flag5 = 0;
int flag6 = 0;
int flag7 = 0;
int flag8 = 0;
int flag9 = 0;
int flag10 = 0;
int flag11 = 0;
int flag12 = 0;
int flag13 = 0;
int flag14 = 0;
int flag15 = 0;
int flag16 = 0;
int flag17 = 0;
int flag18 = 0;
int flag19 = 0;
int flag20 = 0;


float distance = 1;

float speed;
float speed2;
float speed3;
float speed4;
float speed5;
float speed6;
float speed7;
float speed8;
float speed9;
float speed10;
float speed11;
float speed12;
float speed13;
float speed14;
float speed15;
float speed16;
float speed17;
float speed18;
float speed19;
float speed20;
float speed21;


int ir_s1 = 2;
int ir_s2 = 3;
int ir_s3 = 4;
int ir_s4 = 5;
int ir_s5 = 6;
int ir_s6 = 7;
int ir_s7 = 8;
int ir_s8 = 9;
int ir_s9 = 10;
int ir_s10 = 11;
int ir_s11 = 12;
int ir_s12 = 13;
int ir_s13 = 22;
int ir_s14 = 23;
int ir_s15 = 24;
int ir_s16 = 25;
int ir_s17 = 26;
int ir_s18 = 27;
int ir_s19 = 28;
int ir_s20 = 29;

void setup(){
  Serial.begin(9600);
  pinMode(ir_s1, INPUT);
  pinMode(ir_s2, INPUT);
  pinMode(ir_s3, INPUT);
  pinMode(ir_s4, INPUT);
  pinMode(ir_s5, INPUT);
  pinMode(ir_s6, INPUT);
  pinMode(ir_s7, INPUT);
  pinMode(ir_s8, INPUT);
  pinMode(ir_s9, INPUT);
  pinMode(ir_s10, INPUT);
  pinMode(ir_s11, INPUT);
  pinMode(ir_s12, INPUT);
  pinMode(ir_s13, INPUT);
  pinMode(ir_s14, INPUT);
  pinMode(ir_s15, INPUT);
  pinMode(ir_s16, INPUT);
  pinMode(ir_s17, INPUT);
  pinMode(ir_s18, INPUT);
  pinMode(ir_s19, INPUT);
  pinMode(ir_s20, INPUT);
}

void loop() {

if(digitalRead (ir_s1) == LOW && flag1==0){timer1 = millis(); flag1=1;}//read sensor 1
if(digitalRead (ir_s2) == LOW && flag2==0){timer2 = millis(); flag2=1;}//read sensor 2
if(digitalRead (ir_s3) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 3
if(digitalRead (ir_s4) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 4
if(digitalRead (ir_s5) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 5
if(digitalRead (ir_s6) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 6
if(digitalRead (ir_s7) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 7
if(digitalRead (ir_s8) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 8
if(digitalRead (ir_s9) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 9
if(digitalRead (ir_s10) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 10
if(digitalRead (ir_s11) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 11
if(digitalRead (ir_s12) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 12
if(digitalRead (ir_s13) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 13
if(digitalRead (ir_s14) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 14
if(digitalRead (ir_s15) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 15
if(digitalRead (ir_s16) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 16
if(digitalRead (ir_s17) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 17
if(digitalRead (ir_s18) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 18
if(digitalRead (ir_s19) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 19
if(digitalRead (ir_s20) == LOW && flag3==0){timer3 = millis(); flag3=1;}//read sensor 20


if (flag1==1 && flag2==1){
     if(timer1 > timer2){Time = timer1 - timer2;}
else if(timer2 > timer1){Time = timer2 - timer1;}
 Time=Time/1000;//convert millisecond to second
 speed=(distance/Time);//v=d/t
 speed=speed*3600;//multiply by seconds per hr
 speed=speed/1000;//division by meters per Km
}

if (flag2==1 && flag3==1){
     if(timer3 > timer2){Time2 = timer3 - timer2;}
else if(timer2 > timer3){Time2 = timer2 - timer3;}
 Time2=Time2/1000;//convert millisecond to second
 speed2=(distance/Time2);//v=d/t
 speed2=speed2*3600;//multiply by seconds per hr
 speed2=speed2/1000;//division by meters per Km
}

if (flag3==1 && flag4==1){
     if(timer3 > timer4){Time3 = timer3 - timer4;}
else if(timer4 > timer3){Time3 = timer4 - timer3;}
 Time3=Time3/1000;//convert millisecond to second
 speed3=(distance/Time3);//v=d/t
 speed3=speed3*3600;//multiply by seconds per hr
 speed3=speed3/1000;//division by meters per Km
}

if (flag4==1 && flag5==1){
     if(timer4 > timer5){Time4 = timer4 - timer5;}
else if(timer5 > timer4){Time4 = timer5 - timer4;}
 Time4=Time4/1000;//convert millisecond to second
 speed4=(distance/Time4);//v=d/t
 speed4=speed4*3600;//multiply by seconds per hr
 speed4=speed4/1000;//division by meters per Km
}

if (flag5==1 && flag6==1){
     if(timer5 > timer6){Time5 = timer5 - timer6;}
else if(timer6 > timer5){Time5 = timer6 - timer5;}
 Time5=Time5/1000;//convert millisecond to second
 speed5=(distance/Time5);//v=d/t
 speed5=speed5*3600;//multiply by seconds per hr
 speed5=speed5/1000;//division by meters per Km
}

if (flag6==1 && flag7==1){
     if(timer6 > timer7){Time6 = timer6 - timer7;}
else if(timer7 > timer6){Time6 = timer7 - timer6;}
 Time6=Time6/1000;//convert millisecond to second
 speed6=(distance/Time6);//v=d/t
 speed6=speed6*3600;//multiply by seconds per hr
 speed6=speed6/1000;//division by meters per Km
}

if (flag7==1 && flag8==1){
     if(timer7 > timer8){Time7 = timer7 - timer8;}
else if(timer8 > timer7){Time7 = timer8 - timer7;}
 Time7=Time7/1000;//convert millisecond to second
 speed7=(distance/Time7);//v=d/t
 speed7=speed7*3600;//multiply by seconds per hr
 speed7=speed7/1000;//division by meters per Km
}

if (flag8==1 && flag9==1){
     if(timer8 > timer9){Time8 = timer8 - timer9;}
else if(timer9 > timer8){Time8 = timer9 - timer8;}
 Time8=Time8/1000;//convert millisecond to second
 speed8=(distance/Time8);//v=d/t
 speed8=speed8*3600;//multiply by seconds per hr
 speed8=speed8/1000;//division by meters per Km
}

if (flag9==1 && flag10==1){
     if(timer9 > timer10){Time9 = timer9 - timer10;}
else if(timer10 > timer9){Time9 = timer10 - timer9;}
 Time9=Time9/1000;//convert millisecond to second
 speed9=(distance/Time9);//v=d/t
 speed9=speed9*3600;//multiply by seconds per hr
 speed9=speed9/1000;//division by meters per Km
}

if (flag10==1 && flag11==1){
     if(timer10 > timer11){Time10 = timer10 - timer11;}
else if(timer11 > timer10){Time10 = timer11 - timer10;}
 Time10=Time10/1000;//convert millisecond to second
 speed10=(distance/Time10);//v=d/t
 speed10=speed10*3600;//multiply by seconds per hr
 speed10=speed10/1000;//division by meters per Km
}

if (flag11==1 && flag12==1){
     if(timer11 > timer12){Time11 = timer11 - timer12;}
else if(timer12 > timer11){Time11 = timer12 - timer11;}
 Time11=Time11/1000;//convert millisecond to second
 speed11=(distance/Time11);//v=d/t
 speed11=speed11*3600;//multiply by seconds per hr
 speed11=speed11/1000;//division by meters per Km
}

if (flag12==1 && flag13==1){
     if(timer13 > timer12){Time12 = timer13 - timer12;}
else if(timer12 > timer13){Time12 = timer12 - timer13;}
 Time12=Time12/1000;//convert millisecond to second
 speed12=(distance/Time12);//v=d/t
 speed12=speed12*3600;//multiply by seconds per hr
 speed12=speed12/1000;//division by meters per Km
}

if (flag13==1 && flag14==1){
     if(timer13 > timer14){Time13 = timer13 - timer14;}
else if(timer14 > timer13){Time13 = timer14 - timer13;}
 Time13=Time13/1000;//convert millisecond to second
 speed13=(distance/Time13);//v=d/t
 speed13=speed13*3600;//multiply by seconds per hr
 speed13=speed13/1000;//division by meters per Km
}

if (flag14==1 && flag15==1){
     if(timer14 > timer15){Time14 = timer15 - timer14;}
else if(timer15 > timer14){Time14 = timer14 - timer15;}
 Time14=Time14/1000;//convert millisecond to second
 speed14=(distance/Time14);//v=d/t
 speed14=speed14*3600;//multiply by seconds per hr
 speed14=speed14/1000;//division by meters per Km
}

if (flag15==1 && flag16==1){
     if(timer15 > timer16){Time15 = timer15 - timer16;}
else if(timer16 > timer15){Time15 = timer16 - timer15;}
 Time15=Time15/1000;//convert millisecond to second
 speed15=(distance/Time15);//v=d/t
 speed15=speed15*3600;//multiply by seconds per hr
 speed15=speed15/1000;//division by meters per Km
}

if (flag16==1 && flag17==1){
     if(timer17 > timer16){Time16= timer16 - timer17;}
else if(timer16 > timer17){Time16 = timer17 - timer16;}
 Time16=Time16/1000;//convert millisecond to second
 speed16=(distance/Time16);//v=d/t
 speed16=speed16*3600;//multiply by seconds per hr
 speed16=speed16/1000;//division by meters per Km
}

if (flag17==1 && flag18==1){
     if(timer17 > timer18){Time17 = timer17 - timer18;}
else if(timer18 > timer17){Time17 = timer18 - timer17;}
 Time17=Time17/1000;//convert millisecond to second
 speed17=(distance/Time17);//v=d/t
 speed17=speed17*3600;//multiply by seconds per hr
 speed17=speed17/1000;//division by meters per Km
}

if (flag18==1 && flag19==1){
     if(timer18 > timer19){Time18 = timer18 - timer19;}
else if(timer19 > timer18){Time18 = timer19 - timer18;}
 Time18=Time18/1000;//convert millisecond to second
 speed18=(distance/Time18);//v=d/t
 speed18=speed18*3600;//multiply by seconds per hr
 speed18=speed18/1000;//division by meters per Km
}

if (flag19==1 && flag20==1){
     if(timer19 > timer20){Time19 = timer19 - timer20;}
else if(timer20 > timer19){Time19 = timer20 - timer19;}
 Time19=Time19/1000;//convert millisecond to second
 speed19=(distance/Time19);//v=d/t
 speed19=speed19*3600;//multiply by seconds per hr
 speed19=speed19/1000;//division by meters per Km
}

if (flag1==1 && flag20==1){
     if(timer1 > timer20){Time20 = timer1 - timer20;}
else if(timer20 > timer1){Time20 = timer20 - timer1;}
 Time20=Time20/1000;//convert millisecond to second
 speed20=(distance/Time20);//v=d/t
 speed20=speed20*3600;//multiply by seconds per hr
 speed20=speed20/1000;//division by meters per Km
}






if(speed==0 && ){ 
if(flag1==0 && flag2==0 && flag3==0 && flag4==0 && flag5==0 && flag6==0 && flag7==0 && flag8==0 && flag9==0 && flag10==0 && flag11==0 && flag12==0 && flag13==0 && flag14==0 && flag15==0 && flag16==0 && flag17==0 && flag18==0 && flag19==0 && flag20==0){Serial.println ("wachten...");}
else{Serial.println ("..");}}
else{
     //speed results in km/u
     Serial.println (speed);
     Serial.println (speed2);  
     Serial.println (speed3);
     Serial.println (speed4);
     Serial.println (speed5);
     Serial.println (speed6);
     Serial.println (speed7);
     Serial.println (speed8);
     Serial.println (speed9);
     Serial.println (speed10);
     Serial.println (speed11);
     Serial.println (speed12);
     Serial.println (speed13);
     Serial.println (speed14);
     Serial.println (speed15);
     Serial.println (speed16);
     Serial.println (speed17);
     Serial.println (speed18);
     Serial.println (speed19);
     Serial.println (speed20);

    delay(1000);
///reset speed
    speed = 0;
    speed2 = 0;
    speed3 = 0;
    speed4 = 0;
    speed5 = 0;
    speed6 = 0;
    speed7 = 0;
    speed8 = 0;
    speed9 = 0;
    speed10 = 0;
    speed11 = 0;
    speed12 = 0;
    speed13 = 0;
    speed14 = 0;
    speed15 = 0;
    speed16 = 0;
    speed17 = 0;
    speed18 = 0;
    speed19 = 0;
    speed20 = 0;
//flags reset
    flag1 = 0;
    flag2 = 0;    
    flag3 = 0;
    flag4 = 0;
    flag5 = 0;
    flag6 = 0;
    flag7 = 0;
    flag8 = 0;
    flag9 = 0;
    flag10 = 0;
    flag11 = 0;
    flag12 = 0;
    flag13= 0;
    flag14 = 0;
    flag15 = 0;
    flag16= 0;
    flag17 = 0;
    flag18 = 0;
    flag19 = 0;
    flag20 = 0;

 }
}

//}