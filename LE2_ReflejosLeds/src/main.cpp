#include <Arduino.h>
int sec_leds[7][7]{
  {1,0,0,0,0,0,0},
  {0,1,0,0,0,0,0},
  {0,0,1,0,0,0,0},
  {0,0,0,1,0,0,0},
  {0,0,0,0,1,0,0},
  {0,0,0,0,0,1,0},
  {0,0,0,0,0,0,1},
};
int pinesA[7]={27,26,25,33,32,35,34};
void setup() {
for(int i=0; i<8; i++){
pinMode (pinesA[i], OUTPUT);
}

}

void loop() {
//for(int i=0; i<7; i++){
//for(int f=0; f<7; f++){
digitalWrite(pinesA[0], sec_leds[0][0]);
//}
//delay(1000);
}

