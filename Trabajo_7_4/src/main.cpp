#include <arduino.h>
int semal[4][3]{//rav
                  {1,0,0},
                  {1,0,0},
                  {0,1,0}, 
                  {0,0,1},
                  {0,1,0},
                  {1,0,0}
                };
int sema2[4][3]{//nav
                  {0,0,1},
                  {0,1,0},
                  {1,0,0},
                  {1,0,0},
                  {1,0,0},
                  {0,1,0}
                };
int pines1[3]={2,3,4};
int pines2[3]={5,6,7};

void setup(){
  for(int i=0; i<3; i++){
    pinMode (pines1[i], OUTPUT);
    pinMode (pines2[i], OUTPUT);
  }
}
void loop() {
  for(int i=0; i<6;i++) {
    if(semal[i][1]==1||sema2[i][1]==1){
      for(int i=0; i<4; i++){
        for(int c=0; c<3; c++){
          digitalWrite(pines1[c], semal[i] [c]);
          digitalWrite(pines2[c], sema2[i] [c]);
        }
      }
    }
  }
}