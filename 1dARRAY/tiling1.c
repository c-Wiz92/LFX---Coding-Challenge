#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

#define NrowA 10000 // NrowA - no. of rows of MatA
#define NrowB 5000
#define NrowC 10000
#define NcolA 5000 // NcolA - no. of cols of MatA
#define NcolB 512
#define NcolC 512

#define TILE 32

int main(){
    int *MatA, *MatB, *MatC; 
    allocateMemory(&MatA, &MatB, &MatC, NrowA, NrowB, NrowC, NcolA, NcolB, NcolC);
    fillValues(MatA, MatB, MatC, NrowA, NrowB, NrowC, NcolA, NcolB, NcolC);

    for (int i=0; i< NrowC*NcolC; i++){
        MatC[i] = 0;
    }

    for (int ii=0; ii<NrowC; ii+=TILE){
        for (int jj=0; jj<NcolC; jj+= TILE){
            for (int kk=0; kk<NcolA; kk+=TILE){
                for(int i=ii; i <ii+TILE && i<NrowC; i++){
                    for(int j =jj; j<jj +TILE && j<NcolC; j++){
                        for(int k =kk; k<kk+TILE &&k<NcolA; k++){
                            MatC[(i * NcolC) + j] += MatA[(i * NcolA) + k] * MatB[(k * NcolB) + j];
                        }
                    }
                }
            }
        }
    }

    return 0;
}
