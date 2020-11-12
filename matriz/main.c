#include <stdio.h>

int main() {
    int n = 0;

    int matriz_identidade = 1;
    int matriz_zero = 1;
    int somatorio_diagonal = 0;
    int somatorio_diagonal_secundaria = 0;

    /*

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

    //matriz_identidade = (matriz[0][0] + matriz[1][1] + matriz[2][2]) / matriz[0][0] == 3 ? 1 : 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                somatorio_diagonal += matriz[i][j];
            } else if (matriz[i][j]) {
                matriz_zero = 0;
            } 
        }
    }

    i=0;
    for(j = 2; j >= 0; j--){
        somatorio_diagonal_secundaria += matriz[i][j];
        i++;
    }

    matriz_identidade = (matriz[0][0] + matriz[1][1] + matriz[2][2]) / matriz[0][0] == 3 ? 1 * matriz_zero : 0;

    if (matriz_identidade) {
        printf("MATRIZ IDENTIDADE\n");
    }
    if(matriz_zero && !somatorio_diagonal){
        printf("MATRIZ ZERO\n");
    }
    printf("Soma1 = %d\n", somatorio_diagonal);
    printf("Soma2 = %d\n", somatorio_diagonal_secundaria);

    /*
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\n", matriz[i][j]);
        }
    }
    */

    return 0;
}