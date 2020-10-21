#include <stdio.h>
#include <string.h>

int main() {
    char codigo[400] = "olá";

    fgets(codigo, 400, stdin);

    //printf("%s", codigo);

    int indice = 4;
    int i = 0;

    int ver = 0;

    while (codigo[i] != '\0') {
        if (codigo[i] > 'v') {
            indice = indice - (122 - codigo[i]) - 1;
            codigo[i] = 'a';
        }

        if (codigo[i] == ' ') {
        } else {
            codigo[i] = codigo[i] + indice;
            //printf("i --> %d valor--> %c --> indice %d \n", i, codigo[i], indice);
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