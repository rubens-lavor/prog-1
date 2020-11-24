/*

VPL7 - Cidades interligadas

Considere n cidades numeradas de 0 a n-1 que estão interligadas por uma série de estradas de mão única. As ligações entre as cidades são representadas pelos elementos de uma matriz quadrada  Lnxn, cujos elementos lij assumem o valor 1 ou 0, conforme exista ou não estrada direta que saia da cidade i e chegue à cidade j. Assim, os elementos da linha i indicam as estradas que saem da cidade i, e os elementos da coluna j indicam as estradas que chegam à cidade j.

Por convenção lii = 1. A figura mostra um exemplo para n = 4.



Escreva um programa em C que leia uma matriz NxN e seus valores e ao final calcule:

A) Dado k, determinar quantas estradas saem e quantas chegam à cidade k.

B) Qual das cidades chega o maior número de estradas?

Mostre cada um dos valores determinados em uma linha. No caso da figura, considerando a cidade k = 3, as respostas seriam 1  1  2 porque existe uma estrada que sai da cidade 3, uma estrada que chega a cidade 3 e dois porque a cidade que recebe mais estradas é a número 2.

O programa deve ler a matriz linha por linha e ao final da entrada dos dados deve mostrar a matriz informada, uma linha de cada vez e os elementos devem estar separados por um espaço. Após mostrar a matriz o programa deve  solicitar k e mostrar os resultados. 

---------------------------------------------------------------------------------------------------------


Exemplo de entrada:

4

1

1

1

0

0

1

1

0

1

0

1

1

0

0

1

1

3

Saída:

1 1 1 0

0 1 1 0

1 0 1 1

0 0 1 1

1

1

2

*/

// as que entram conta as colunas
// as que saem conta as linhas

#include <stdio.h>

int main() {
    int n = 0;
    int k = 0;
    int i = 0;
    int j = 0;
    int cont_estrada_entra = 0;
    int cont_estrada_sai = 0;

    int maior_num_estradas = 0;
    int prox = 0;
    int cont_atual = 0;
    int cont_prox = 0;

    printf("INFORME UM VALOR \n");
    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        if (matriz[i][k] && i != k) {
            cont_estrada_entra++;
        }
    }

    for (j = 0; j < n; j++) {
        if (matriz[k][j] && j != k) {
            cont_estrada_sai++;
        }
    }

    /*
    for (i = 0; i < n; i++) {
            if (matriz[i][maior_num_estradas] && i != maior_num_estradas) {
                cont_atual++;
            }
        }

        for (j = 0; j < n; j++) {
            if (matriz[maior_num_estradas][j] && j != maior_num_estradas) {
                cont_atual++;
            }
        }
        printf("cont atual = %d  cidade = %d \n", cont_atual, maior_num_estradas);

    */    

    while (n > 0) {
        printf("no while \n");
        //int cont_atual = 0;
        cont_prox = 0;

        

        for (i = 0; i < n; i++) {
            if (matriz[i][prox] && i != prox) {
                cont_prox++;
            }
        }

        for (j = 0; j < n; j++) {
            if (matriz[prox][j] && j != prox) {
                cont_prox++;
            }
        }
                    printf("cont prox = %d  prox = %d \n", cont_prox, prox);


        if(cont_prox > cont_atual){
            maior_num_estradas = prox;
            cont_atual = cont_prox;
            printf("cont atual = %d  cidade = %d \n", cont_atual, maior_num_estradas);
        }

        prox ++;
        n--;
    }

    printf("%d \n%d \n%d \n", cont_estrada_entra, cont_estrada_sai, maior_num_estradas);

    return 0;
}