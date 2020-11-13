
/*
VPL6 - Operações com matrizes

Escreva um programa em C que solicite ao usuário a dimensão de uma matriz quadrada, ou seja, o programa deve solicitar um valor inteiro N para uma matriz de dimensão NxN. Após ler a dimensão da matriz o programa deve preenche-la com valores inteiros. 

O programa deve ler a matriz linha por linha e ao final da entrada dos dados deve mostrar a matriz informada, uma linha de cada vez e os elementos devem estar separados por um espaço.

Após o preenchimento da matriz, o programa deve indicar se a matriz é uma "matriz identidade" ou "matriz zero" e mostrar a soma dos elementos da diagonal principal da matriz.

A saída do programa deve seguir o seguinte padrão:

- Escreva "MATRIZ IDENTIDADE" se a matriz for uma matriz identidade;

- Escreva "MATRIZ ZERO" se a matriz for uma matriz zero;

- Em uma nova linha escreva a soma dos elementos da diagonal principal, no padrão "Soma1 = <valor_calculado>";

- Em uma nova linha escreva a soma dos elementos da diagonal secundária  no padrão "Soma2 = <valor_calculado>".

Caso a matriz não seja identidade e nem zero o programa deve mostrar apenas o valor das somas.

Saiba que:

Matriz identidade: é uma matriz em que todos os elementos são iguais a um para i=j e iguais a zero para as outras posições.
Matriz zero: é uma matriz em que todos os elementos são nulos (zeros).
---------------------------------------------------------------------------------------------------------

Exemplo de entrada:

3
1

0

0
0

1

0

0

0

1

Saída:

1 0 0

0 1 0

0 0 1
MATRIZ IDENTIDADE

Soma1 = 3

Soma2 = 1
*/



#include <stdio.h>

int main() {

    int n = 0;

    int matriz_identidade = 0;
    int matriz_zero = 1;
    int somatorio_diagonal = 0;
    int somatorio_diagonal_secundaria = 0;

    int i = 0;
    int j = 0;

    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                somatorio_diagonal += matriz[i][j];
            } else if (matriz[i][j]) {
                matriz_zero = 0;
            }
        }
    }

    i = 0;
    for (j = 2; j >= 0; j--) {
        somatorio_diagonal_secundaria += matriz[i][j];
        i++;
    }

    if(matriz[0][0]){
        matriz_identidade = somatorio_diagonal / matriz[0][0] == n ? 1 * matriz_zero : 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    if (matriz_identidade) {
        printf("MATRIZ IDENTIDADE\n");
    }
    if (matriz_zero && !somatorio_diagonal) {
        printf("MATRIZ ZERO\n");
    }
    printf("Soma1 = %d\n", somatorio_diagonal);
    printf("Soma2 = %d\n", somatorio_diagonal_secundaria);

    return 0;
}