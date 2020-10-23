/*
Mergulhadores


Um terremoto atingiu uma cidade e afetou muitas edificações, sendo que o principal dique de contenção teve um dano significativo na sua parte subterrânea e deve ser consertado  rapidamente. O conserto foi realizado por mergulhadores, e cada um deles recebeu no início do mergulho uma placa com um número de identificação.

O dique foi consertado, mas infelizmente nem todos mergulhadores voltaram da missão. Você foi contratado para verificar quem não voltou, após analisar as placas de quem voltou.

Escreva um programa em C que receba como entrada dois números inteiros N e R correspondentes ao total de mergulhadores e ao total de mergulhadores que voltaram da missão, respectivamente. Cada mergulhador é identificado por um número inteiro de 1 até N. Considere que N e R sempre é maior que zero, e caso algum destes valores não respeitarem esta condição o programa deve apresentar com o saída a palavra "ERRO".

A entrada do programa deve ser composta das seguintes informações: N, R, e a identificação dos mergulhadores que voltaram. A saída do programa deve ser a identificação dos mergulhadores que não voltaram da missão. Caso todos tenham voltado da missão o programa deve imprimir o caracter “*”. Dica: Utilize vetores para resolver o problema.

Exemplos de execução:

Entrada       

5

3

3

1

5            

Saída:

2

4

Entrada

6

6

Saída

*

*/

#include <stdio.h>

int main() {
    int n = 0;
    int r = 0;

    int vetor[20] = {};
    int voltou = 0;

    int i = 0;
    int j = 0;

    scanf("%d", &n);
    scanf("%d", &r);

    if (r > n || r < 0 || n < 0) {
        printf("ERRO\n");
        return 0;
    }

    if (r == n) {
        printf("*\n");
        return 0;
    }

    for (i = 0; i < r; i++) {
        scanf("%d", &vetor[i]);
    }

    for (j = 1; j < n+1 ; j++) {
        voltou = 0;
        for (i = 0; i < r; i++) {
            if (vetor[i] == j) {
                voltou = 1;
            }
        }

        if (!voltou) {
            printf("%d\n", j);
        }
    }
    return 0;
}