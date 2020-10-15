/**
Fatorial

Escreva um programa em C que calcule N! (fatorial de N), sendo que o valor inteiro de N é fornecido pelo usuário.

Sabendo que:
• N!= 1 * 2 * 3 * ...* (N – 1) * N;
• 0!= 1, por definição.

---------------------------------------------------------------------------------------------------------


Exemplo de entrada:

3

Exemplo de saída:

6
*/

#include<stdio.h>

long double fat(int n) {
    if ((n == 1) || (n == 0))
        return 1;
    else
        return fat(n - 1) * n;
}

int main(){
    
    int numero = 3;
    printf("%d! = %.Lf", numero, fat(numero));

    return 0;
}