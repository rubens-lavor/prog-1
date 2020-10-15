#include <stdio.h>

/*
Os números de Fibonacci compõem uma sequência de números com regra de formação bem definida. Seus primeiros elementos sempre são 0, 1, 1, 2, 3, .... Por exemplo, uma sequência com 15 termos seria: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610.

Elabore um algoritmo que leia um valor inteiro k, onde k é o número de termos da sequência. O valor de k deve sempre ser maior ou igual a 3 (k >= 3). Por exemplo, se o valor de k for 8, o termos serão 0, 1, 1, 2, 3, 5, 8, 13. Caso o valor de k não atenda o requisito o programa deve retornar o valor -100.

Caso o valor de k atenda o requisito, o programa deve mostrar como saída a seguinte informação:

- se o k-ésimo termo for um número par, mostre o somatório dos termos.

- se o k-ésimo termo for um número ímpar, mostre o maior valor par da sequência.

****************************************

Lembretes:

* Você deve resolver o problema no arquivo disponível no VPL ao abrir a aba Editar, não deve ser anexado nenhum arquivo;

* A correção é automática, portanto as instruções sobre entrada e saída são muito importantes. Sempre preste atenção ao exemplo apresentado junto com o problema;

* Não esqueçam de inserir as bibliotecas básicas;

* Lembrem-se que o comando \n avança o cursor para uma nova linha;

* Caso utilize o comando printf("") no início do programa, insira : no final do texto ou utilize \n para que essa informação não seja interpretada como saída do programa. Exemplo: printf("Utilize:") e/ou printf("Utilize \n").

---------------------------------------------------------------------------------------------------------

Exemplo de execução

Entrada             Saída

0                    -100

Entrada             Saída

6                       2         //maior valor par

Entrada             Saída

10                      88      //soma

*/

int fibonacci(int valor) {
    //if (valor == 0) return -100;
    if (valor == 1) return 0;
    if (valor == 2 || valor == 3) {
        return 1;
    } else {
        return fibonacci(valor - 1) + fibonacci(valor - 2);
    }
}

int main() {
    int k = 0;
    int somatorio = 0;

    //printf("Informe o k-ésimo valor");
    scanf("%d", &k);


    if (k<=0){printf("%d\n", -100); return 0;}
    if (fibonacci(k) % 2 == 0) {
        while (k > 1) {
            somatorio += fibonacci(k);
            k -= 1;
        }
        //printf("O somatório é: %d\n", somatorio);
        printf("%d\n", somatorio);
    } else {
        /*if (k<2){
            //printf("O maior valor par é: %d\n", 0);
            printf("%d\n", fibonacci(k));
        }
        */
        while (k > 3) {
            k -= 1;
            if (fibonacci(k) % 2 == 0) {
                //printf("O maior valor par é: %d\n", fibonacci(k));
                printf("%d\n", fibonacci(k));
                break;
            }
            
        }
    }

    //printf("O %dº temor é: %d\n", k, fibonacci(k));

    return 0;
}