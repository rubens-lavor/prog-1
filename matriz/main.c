#include <stdio.h>

int main() {
    int n = 0;
    int r = 0;

    int vetor[20] = {};
    int voltou = 0;

    int i = 0;
    int j = 0;

    scanf("%d", &n);

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