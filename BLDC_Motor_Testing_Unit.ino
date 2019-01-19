#include <Servo.h>      //Include Servo.h
Servo SimonKESC;        //Create a virtual servo named SimonKESC
int potPin=A2;          //Specify potentiometer pin A2 on Arduino

void setup()
{
  SimonKESC.attach(3);  //Specify here the pin number on which the signal pin of ESC is connected
}

void loop()
{
int pot=analogRead(potPin);       //Read analog value from potentiometer and store it in var. "pot"
pot=map(pot,0,1023,0,179);        //map(pot,0,1023,0,179) and modify (store again) in var. "pot"
SimonKESC.write(pot);             //Write to SimonKESC according to pot value (output)
}
