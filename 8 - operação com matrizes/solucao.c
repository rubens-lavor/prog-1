/*
VPL8 - Operações com matrizes
Disponível a partir de: Sunday, 22 Nov 2020, 12:00
Data de entrega: Wednesday, 9 Dec 2020, 23:59
Arquivos requeridos: solucao.c, biblio.h, biblio.c (Baixar)
Tipo de trabalho: Trabalho individual
Escreva um programa em C que realize operações com matrizes e vetores. O objetivo do exercício é implementar uma solução utilizando funções. O programa principal está implementado no arquivo solucao.c e não deve ser modificado. A solução utiliza uma biblioteca biblio.h que já está definida e também não deve ser modificada. O corpo das funções deve ser implementado no arquivo biblio.c que está no exercício. 

Analise o programa principal juntamente com o protótipo das funções para deduzir o que deve ser implementado no arquivo biblio.c. Você não deve alterar o protótipo das funções, basta escrever o corpo de cada função após concluir como ela funciona.

A entrada do programa deve ser:

- o total de linhas da matriz, sendo que o número de colunas é fixo, sendo sempre 5;

- a matriz de inteiros, sendo que a matriz deve ser apresentada linha por linha e os dados devem ser informados com scanf();

A saída gerada deve ser:

- A matriz informada (uma linha por vez, com um espaço entre cada elemento);

- O valor do traço da matriz, quando possível calcular;

- A verificação se a matriz é simétrica (quando possível). Se ela for deve ser informado a saída "simetrica", se não for a saída "nao simetrica". Busque informações sobre como verificar se uma matriz é simétrica.

- Um vetor com os maiores elementos de cada linha da matriz. A impressão deve ser em única linha e os elementos devem estar separados por um espaço.

*/

#include <stdio.h>
#include "biblio.h"

int main(){
    int lin,x;
    scanf("%i",&lin);
    int mat[lin][5], vet[lin];
    le_matriz(mat,lin);
    imprime_matriz(mat,lin);
    if (lin==5){
        x = traco(mat);
        printf("\nTraco = %i", x);
        simetrica(mat,lin);
    }
    else {
        printf("\nNao eh possivel calcular traco e simetria.");
    }
    maiores(mat,vet,lin);
    printf("\n");
    imprime_vetor(vet,lin);
    return 0;
}

