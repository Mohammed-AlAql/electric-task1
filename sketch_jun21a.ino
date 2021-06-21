#include <Servo.h>

Servo myser1; 
Servo myser2;
Servo myser3;
Servo myser4;
Servo myser5;

int p1= A1;
int p2= A2;
int p3= A3;
int p4= A4;
int p5= A5;

int v1=0;
int v2=0;
int v3=0;
int v4=0;
int v5=0;

void setup()
{
myser1.attach(0);
myser2.attach(1);
myser3.attach(2);
myser4.attach(4);
myser5.attach(7);
  
  
}

void loop()
{
  
  v1=analogRead(p1);
  v1 = map(v1,0,1023,0, 90);
  myser1.write(v1);
  delay (15);
  
  v2=analogRead(p2);
  v2 = map(v2,0,1023,0, 90);
  myser2.write(v2);
  delay (15);
   
  v3=analogRead(p3);
  v3 = map(v3,0,1023,0, 90);
  myser3.write(v3);
  delay (15);
   
  v4=analogRead(p4);
  v4= map(v4,0,1023,0, 90);
  myser4.write(v4);
  delay (15);
   
  v5=analogRead(p5);
  v5= map(v5,0,1023,0, 90);
  myser5.write(v5);
  delay (15);
   
}
