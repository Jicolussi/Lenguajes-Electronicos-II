#include <Arduino.h>
#define DELAY_AMARILLO 1500
#define DELAY_ROJO_VERDE 3000
volatile bool flag = false;
int semaforoA[3][3]={//r a v
                      {1,0,0},
                      {0,1,0},
                      {0,0,1}
};
int semaforoP[2][2]={//r v
                      {1,0},
                      {0,1},
};

int pinesA[3]={2,3,4};
int pinesP[2]={5,6};

void setup() {
  for(int i=0; i<3; i++){
    pinMode (pinesA[i], OUTPUT);
  }
  for(int i=0; i<2; i++){
    pinMode (pinesP[i], OUTPUT);
  }
}

void loop() {
  if(flag){
    for(int i=0; i<=2; i++){
      for(int c=0; c<2; c++){
        digitalWrite(pinesP[c], semaforoP[i][c]);
      }
    }
      for(int i=0; i<3; i++){
        digitalWrite(pinesA[i], semaforoP[0][i]);
      }  
  flag=false;
  }else{
    for(int i=0; i<3; i++){
      for(int c=0; c<3; c++){
        digitalWrite(pinesA[c], semaforoA[c][i]);
        for(int i=0; i<2; i++){
          digitalWrite(pinesA[i], semaforoP[0][i]);
        }
      }
    }
  }
}

void ISR(){
  flag=true;
}