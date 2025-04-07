#include "Arduino.h"
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
    pinMode (pinesP[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<=6; i++ ){
    
  }
}
