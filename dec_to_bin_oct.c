#include <stdio.h>

/*
Escreva um programa em C que converta um número inteiro maior ou igual a 0 (zero) na base decimal e converta este número para as bases binária (base 2) e octal (base 8). O programa deve tratar o caso da entrada de números negativos, e deve ler números até ser informado um número válido.  A ordem de impressão é primeiro o número binário e na outra linha o número octal.

Lembretes:

* Você deve resolver o problema no arquivo disponível no VPL ao abrir a aba Editar, não deve ser anexado nenhum arquivo;

* A correção é automática, portanto as instruções sobre entrada e saída são muito importantes. Sempre preste atenção ao exemplo apresentado junto com o problema;

* Não esqueçam de inserir as bibliotecas básicas;

* Lembrem-se que o comando \n avança o cursor para uma nova linha;

* Caso utilize o comando printf("") no início do programa, insira : no final do texto ou utilize \n para que essa informação não seja interpretada como saída do programa. Exemplo: printf("Utilize:") e/ou printf("Utilize \n").

---------------------------------------------------------------------------------------------------------

Exemplo de execução

Entrada             Saída

26                      11010

                          32

Entrada             Saída

-5

6                       110

                          6
*/

int binario(int valor) {
    if (valor == 0) {
        return 0;
    }
    return binario(valor / 2) * 10 + valor % 2;
}

int octal(int valor) {
    if (valor == 0) {
        return 0;
    }
    return octal(valor / 8) * 10 + valor % 8;
}

int main() {
    int numero = 0;
    
    scanf("%d", &numero);
    while(numero < 0){
        scanf("%d", &numero);
    }

    printf("%d\n", binario(numero));
    printf("%d\n", octal(numero));

    
    return 0;
    
}