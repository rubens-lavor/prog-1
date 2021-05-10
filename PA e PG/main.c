/*
Elabore um algoritmo que determine os termos de uma Progressão Aritmética (PA) e de uma Progressão Geométrica (PG).

Some cada um dos termos da PA e da PG e calcule a soma total desses termos.

Subtraia cada n-éssimo termo da PA do n-éssimo termo da PG e calcule a soma total desses termos.

Seu algoritmo não precisa mostrar os termos da PA e da PG gerados.

O algoritmo deve ler 3 valores inteiros. Para ambas as progressões, considere que o primeiro valor é o termo inicial da progressão, o segundo valor é o número de termos e o terceiro valor é razão.

Seu algoritmo deve mostrar o somatório da soma dos termos e o somatório da subtrações dos termos, ambos na mesma linha e separados por um espaço.

Exemplo

Caso seja fornecida como entrada os valores 1 (termo inicial), 5 (quantidade de termos) e 2 (razão).

PA: 1, 3, 5, 7, 9
PG: 1, 2, 4, 8, 16

Soma dos termos das progressões: 2, 5, 9, 15, 25
Total da soma: 56

Subtração dos termos das progressões: 0, 1, 1, -1, -7
Total da subtração: -6

Sendo assim, se a entrada forem os valores 1 5 2, a saída será 56 -6.
*/


#include <stdio.h>

int main() {
    int inicio = 0;
    int qnt = 0;
    int passo = 0;

    scanf("%i", &inicio);
    scanf("%i", &qnt);
    scanf("%i", &passo);

    int vet[qnt];
    int vetPG[qnt];
    int vetPA[qnt];


    vetPG[0] = inicio;
    vetPA[0] = inicio;
    int i;

    for (i = 2; i <= qnt; i++) {
        vetPA[i-1] = vetPA[i-2] + passo;
    }

    for (i = 2; i <= qnt; i++) {
        vetPG[i-1] = vetPG[i-2] * passo;
    }

    int soma = 0;
    int sub = 0;

    for (i = 0; i < qnt; i++) {
      vet[i] = (vetPA[i]+vetPG[i]); 
    }

    
    for (i = 0; i < qnt; i++) {
      soma += vet[i]; 
    }

    for (i = 0; i < qnt; i++) {
      vet[i] = (vetPA[i]-vetPG[i]); 
    }

    for (i = 0; i < qnt; i++) {
      sub += vet[i]; 
    }

    printf("%i %i", soma, sub);

    return 0;
}