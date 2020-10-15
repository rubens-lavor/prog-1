/*
Valor de uma série

Sendo H = 1 + 1/2 +1/3 +1/4 + ... + 1/N, escreva um programa em C para gerar o número H. O número N é um valor inteiro e é fornecido pelo usuário. O valor H calculado é um valor real e deve ser mostrado ao final do programa com três casas decimais. Utilize printf("%.3f", variável) para mostrar três casas decimais.

---------------------------------------------------------------------------

Exemplo de entrada:

3

Exemplo de saída:

1.833
*/

#include <stdio.h>

int main() {
    int n = 3;
    float H = 0;

    for (int i = n; i > 0; i--) {
        H += 1.0/i;
        //printf("%.3f\n", H);
    }

    printf("%.3f", H);

    return 0;
}