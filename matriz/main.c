#include <stdio.h>

int main() {
    int n = 0;
    /*
    int r = 0;

    int vetor[20] = {};
    int voltou = 0;

    */
    int i = 0;
    int j = 0;

    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++) {
        //for (j = 1; j < n; j++) {
            scanf("%d %d %d", &matriz[i][0], &matriz[i][1], &matriz[i][2]);
        //}
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\n", matriz[i][j]);
        }
    }
    
    return 0;
}