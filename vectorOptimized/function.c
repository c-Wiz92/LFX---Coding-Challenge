#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void allocateMemory(int **MatA, int **MatB, int **MatC, int NrowA, int NrowB, int NrowC, int NcolA, int NcolB, int NcolC){
    *MatA = (int *) malloc(NrowA * NcolA * sizeof(int));
    *MatB = (int *) malloc(NrowB * NcolB * sizeof(int));
    *MatC = (int *) malloc(NrowC * NcolC * sizeof(int));
}

void fillValues(int *MatA, int *MatB, int *MatC, int NrowA, int NrowB, int NrowC, int NcolA, int NcolB, int NcolC){

    // filling the matrices with the arbitrary values 1, 2, assuming they are filled in a row-wise order.
    for (int i =0; i<NrowA * NcolA; i++){
        MatA[i] = 1;
    }
    for (int i =0; i<NrowB * NcolB; i++){
        MatB[i] = 2;
    }
}