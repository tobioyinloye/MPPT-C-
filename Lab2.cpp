#include <iostream>
#include <cmath>
extern int rPos = 0;
extern int newPos = 0;
extern float Voltage[180] = {0};
extern float Current[180] = {0};
extern bool Init_scan = false ;



bool Scan() {
  for (int x = 0; x<180;x++){
    rPos = moveServo(x);
    voltage[x] = solarVoltage();
  }
  newPos = maxVoltage();
  rPos = moveServo(newPos);
  
  Init_scan = true;
}

int moveServo(){
  // insert code here to move the stepper motor in left or right direction
  //return pos;
}

float solarVoltage(){
  // insert code here to get voltage.
  //return Volts;
}

int maxVoltage(){
  float maxVolt = 0;
  int pos = 0;
  
  for(int i =o; i<180;i++){
  
}

int main() {
  
  int Current_Pos = 0;
if(Init_scan){
  // run a command to initiate steady comparison between the voltages/power from the photoTransistors.
}
}