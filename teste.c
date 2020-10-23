#include <stdio.h>
#include <string.h>

int main() {
    char str[10][4] = {};
    int n = 0;
    int par = 0;
    int parada = 0;

    int armazena_pos[10] = {};
    int i = 0;
    int k = 0;
    int j = 0;

    for (i = 0; i < 10; i++) {
        armazena_pos[i] = -1;
    }
    //printf("%d", armazena_pos[0]);

    /*
    while (parada != -99) {
        scanf("%d", &n);
        setbuf(stdin, NULL);

        for (i = 0; i < n; i++) {
            setbuf(stdin, NULL);
            fgets(str[i], 6, stdin);
        }

        for (k = 0; k < n - 1; k++)
            for (j = k + 1; j < n; j++)
                if (strncmp(str[k], str[j], 2) == 0) {
                    if (strncmp(str[k], str[j], 4) == 0) {
                    } else {
                        
                        par++;
                    }
                }
            
        
        printf("%d\n", par);

        scanf("%d", &parada);
        setbuf(stdin, NULL);
    }

    */
    return 0;
}

/*

#include <stdio.h>
#include <string.h>

int main() {
    char str[10][4] = {};
    int n = 0;
    int par = 0;
    int parada = 0;
    
    /*

    int k = 2;
    char str2[10]={};

    printf("%d",strlen(str2));

    printf("%d",strlen(str2));
    printf("%s",str2);

    scanf("%d", &parada);
    setbuf(stdin, NULL);

    printf("%d",parada);
    */

/*
   

    while (parada != -99) {
        scanf("%d", &n);
        setbuf(stdin, NULL);

        for (int i = 0; i < n; i++) {
            //scanf("%s", str[i]);
            setbuf(stdin, NULL);
            fgets(str[i], 6, stdin);
            //printf("%s", str[i]);
        }

        for (int k = 0; k < n - 1; k++)
            for (int j = k + 1; j < n; j++)
                if (strncmp(str[k], str[j], 2) == 0) {
                    if (strncmp(str[k], str[j], 4) == 0) {
                    } else {
                        par++;
                        //str[0][k] = "";
                        //str[0][j] = "";
                        break;
                    }
                }

        printf("%d\n", par);

        scanf("%d", &parada);
        setbuf(stdin, NULL);
    }

    for (int i = 0; i < n; i++) {
        printf("%s", str);
    }


    return 0;
}

*/