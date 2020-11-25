//O problema deve ser resolvido neste arquivo.

#include "gabarito.h"

#include <stdio.h>

void gabarito(int *V) {
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &V[i]);
    }
}

void cria_matriz_respostas(int X[][10], int alun) {
    int i, j;
    for (i = 0; i < alun; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &X[i][j]);
        }
    }
}

void imprime_mat(int X[][10], int alun) {
    int i, j;
    for (i = 0; i < alun; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", X[i][j]);
        }
        if(i!=alun-1)
            printf("\n");
    }
}

void imprime_vet(int *V, int alun) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", V[i]);
    }
}

void calcula_notas(int X[][10], int *N, int V[10], int alun) {
    int i, j;
    for (i = 0; i < alun; i++) {
        N[i]=0;
    }

    for (i = 0; i < alun; i++) {
        for (j = 0; j < 10; j++) {
            if(X[i][j]==V[j])
                N[i]+=X[i][j];
        }
    }
}

float calcula_media_turma(int *V, int alun) {
    float somatorio;
    int i;
    for (i = 0; i < alun; i++) {
        somatorio += V[i];
    }

    return somatorio/alun;
}

int calcula_acima(int *N, float med, int alun) {
    int cont;
    int i;
    for (i = 0; i < alun; i++) {
        if(N[i]>=med)
            cont++;
    }
    return cont;
}

int calcula_abaixo(int *N, float med, int alun) {
    int cont;
    int i;
    for (i = 0; i < alun; i++) {
        if(N[i]<med)
            cont++;
    }
    return cont;
}
