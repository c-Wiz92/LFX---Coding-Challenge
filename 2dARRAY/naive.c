#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#define NrowA 10000 // NrowA - no. of rows of MatA
#define NrowB 5000
#define NrowC 10000
#define NcolA 5000 // NcolA - no. of cols of MatA
#define NcolB 512
#define NcolC 512

int main(){
    int **MatA, **MatB, **MatC; 
    allocateMemory(&MatA, &MatB, &MatC, NrowA, NrowB, NrowC, NcolA, NcolB, NcolC);
    fillValues(MatA, MatB, MatC, NrowA, NrowB, NrowC, NcolA, NcolB, NcolC);

    // NAIVE MULTIPLICATION
    for (int i =0; i<NrowC; i++){
        for (int j =0; j<NcolC; j++){
            MatC[i][j] = 0;
            for (int k =0; k<NcolA; k++){
                MatC[i][j] += MatA[i][k] * MatB[k][j];
            }
        }
    }
}