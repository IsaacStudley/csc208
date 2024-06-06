#include <iostream>
#include <swiss.h>
#include <algorithm>
using namespace std;

void Competitor::against(Competitor other){
score+=1;
  //nume --;
}

int swiss (Competitor com[], int numRounds){

int i, j, min_idx;
Competitor nCom [sizeof(com)];
for (int i = 0; i <= sizeof(com); i++){
nCom[i] = com[i];
}
for (int i = 0; i <= sizeof(nCom); i++){
min_idx = i;
        for (j = i + 1; j < sizeof(com); j++) {
            if (com[j].score < com[min_idx].score)
                min_idx = j;
        }
        if (min_idx != i)
            nCom[min_idx] = com[i];
    }
int bye = sizeof(nCom)%2;
if(bye == 1){
    nCom[0].score+=3;
}
for (int i = bye; i <= numRounds; i+=2){
nCom[i].against(nCom[i+1]);
}

}

int roundRobin (int num){

}

int preSeeded (int num){

}

int main(){
Competitor competitors [3] = {1,2,3};
     

return 0;
}