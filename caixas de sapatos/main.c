#include <stdio.h>
#include <string.h>

int main() {
    char codigo[400]="";
    char aux[4];
    //char aux2[4];
    int n = 0;

    scanf("%i", &n);
    
    setbuf(stdin,NULL);
    //fgets(aux, 5, stdin);
    //strcpy(aux,aux2);
    //strncat(codigo, aux, 3);
    
    //setbuf(stdin,NULL);

    while (n > 0) {
        
        for (int i = 0; i < strlen(aux); i++){
            aux[i]=' ';
        }
        printf("\nentre com um nome\n");
        fgets(aux, 4, stdin);
        setbuf(stdin,NULL);
        //puts(aux);
        strncat(codigo, aux, 3);
        //strcat(codigo,aux);
        printf("\n concatenado --> %s", codigo);
        n--;
    }

    printf("%s", codigo);

    /*
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
    */

    return 0;
}