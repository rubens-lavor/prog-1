/*
Soma dos ímpares múltiplos de 3



Elabore um algoritmo em linguagem C que determine e mostre a soma dos números ímpares múltiplos de 3 em um intervalo entre zero e um número inteiro informado pelo usuário.

Por exemplo, do número zero até o número 10, os número ímpares e que também são múltiplos de 3 são os números 3 e 9 e cujo a soma dos dois valores resulta em 12.

O programa deve retornar um inteiro com a soma dos números que atendem ao requisito. Caso o usuário informe um valor menor ou igual a 0 é preciso mostrar como saída o valor 0 (zero). 

---------------------------------------------------------------------------------------------------------

Exemplo:

Entrada        Saída

10                      12

Entrada        Saída

6                        3

Entrada       Saída

-5                     0

 3 e 9 e cujo a soma dos dois valores resulta em 12.
 
*/

#include <stdio.h>

int main() {
    int numero = 100;
    int contador = 0;

    numero < 0 ? printf("%d\n", 0) : ({
        while (numero > 0) {
            if (numero % 3 == 0) {
                if (numero % 2 == 1) {
                    contador += numero;
                    //printf("%d\n", numero);
                }
            }
            numero -= 1;
        }

        printf("Soma dos ímpares múltiplos de 3 é: %d\n", contador);
    });

    return 0;
}