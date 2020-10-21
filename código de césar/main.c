#include <stdio.h>
#include <string.h>

int main() {
    char codigo[400] = "olá";

    fgets(codigo, 400, stdin);

    printf("%s", codigo);

    int i = 0;
    while (codigo[i] != '\0') {
        if (codigo[i] == ' ') {
        } else {
            codigo[i] = codigo[i] + 1;
            printf("indice --> %d valor--> %c \n", i, codigo[i]);
        }
        i++;
    }

    printf("%s", codigo);

    return 0;
}