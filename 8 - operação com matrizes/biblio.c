#include "biblio.h"
#include <stdio.h>

void le_matriz(int A[][5], int x) {
    int i, j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &A[i][j]);
        }
    }
}

void imprime_matriz(int A[][5], int x) {
    int i, j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", A[i][j]);
        }
        if(i!=x-1)
            printf("\n");
    }
}

int traco(int A[][5]) {
    int traco = 0;
    int i = 0;
    for (i = 0; i < 5; i++) {
        traco += A[i][i];
    }

    return traco;
}

void maiores(int A[][5], int B[], int x) {
    int i, j;
    for (i = 0; i < x; i++) {
        B[i] = A[i][0];
        for (j = 1; j < 5; j++) {
            if (B[i] < A[i][j]) {
                B[i] = A[i][j];
            }
        }
    }
}

void imprime_vetor(int B[], int x) {
    int i;
    for (i = 0; i < x; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

void simetrica(int A[][5], int x) {
    int i, j;
    for (i = 0; i < x; i++) {
        for (j = i + 1; j < 5; j++) {
            if (A[i][j] != A[j][i]){
                printf("\nnao simetrica");
                return;
            }
        }
    }
    printf("\nsimetrica");
    return;
}
