#ifndef GABARITO_H
#define GABARITO_H

//O arquivo de protótipos não deve ser modificado

void gabarito(int *V);

void cria_matriz_respostas(int X[][10], int alun);

void imprime_mat(int X[][10], int alun);

void imprime_vet(int *V, int alun);

void calcula_notas(int X[][10], int *N, int V[10], int alun);

float calcula_media_turma(int *V, int alun);

int calcula_acima(int *N, float med, int alun);

int calcula_abaixo(int *N, float med, int alun);

#endif