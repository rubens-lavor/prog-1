/*
Código de César


O código de César é uma das mais simples e conhecidas técnicas de criptografia. A técnica consiste em substituir cada letra do texto por outra, que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de quatro posições, a letra A seria substituída por E, B ser tornaria F e assim por diante. Escreva um programa em C que implemente o código de César para quatro posições. O programa deve ler um string e imprimir a string codificada toda em letras maiúsculas. Por exemplo:

String de entrada: engenharia eh legal

Nova string: IRKIRLEVME IL PIKEP

 

Obs.: considere um alfabeto de 26 letras (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z) e quando não houver quatro posições até o final a contagem deve começar novamente, por exemplo, Y deve ser substituído por C. 

Dica: lembrem que ao criar uma string a partir de outra é preciso finalizar com "\0", caso contrário pode dar problema na hora de imprimir a string. 

*/

#include <stdio.h>
#include <string.h>

int main() {
    char codigo[400] = "olá";

    fgets(codigo, 400, stdin);

    //printf("%s", codigo);

    int indice = 4;
    int i = 0;

    while (codigo[i] != '\0') {
        if (codigo[i] > 'v') {
            indice = indice - (122 - codigo[i]) - 1;
            codigo[i] = 'a';
        }

        if (codigo[i] == ' ') {
        } else {
            codigo[i] = codigo[i] + indice;
        }
        i++;
        indice = 4;
    }

    i = 0;
    for (i; i < strlen(codigo); i++) {
        codigo[i] = toupper(codigo[i]);
    }

    printf("%s", codigo);

    return 0;
}