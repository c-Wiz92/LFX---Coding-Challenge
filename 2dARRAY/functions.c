#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void allocateMemory(int ***MatA, int ***MatB, int ***MatC, int NrowA, int NrowB, int NrowC, int NcolA, int NcolB, int NcolC){
    *MatA = (int **) malloc(NrowA * sizeof(int *));
    *MatB = (int **) malloc(NrowB * sizeof(int *));
    *MatC = (int **) malloc(NrowC * sizeof(int *));
    for (int i = 0; i<NrowA; i++){
        (*MatA)[i] = (int *) malloc(NcolA * sizeof(int));
    }
    for (int i = 0; i<NrowB; i++){
        (*MatB)[i] = (int *) malloc(NcolB * sizeof(int));
    }
    for (int i = 0; i<NrowC; i++){
        (*MatC)[i] = (int *) malloc(NcolC * sizeof(int));
    }
}

void fillValues(int **MatA, int **MatB, int **MatC, int NrowA, int NrowB, int NrowC, int NcolA, int NcolB, int NcolC){
    // filling the matrices with the arbitrary values 1, 2

    for (int i =0; i<NrowA; i++){
        for (int j=0; j<NcolA; j++){
            MatA[i][j] = 1;
        }
    }
    for (int i =0; i<NrowB; i++){
        for (int j=0; j<NcolB; j++){
            MatB[i][j] = 2;
        }
    }
}
