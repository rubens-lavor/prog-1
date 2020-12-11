#include <stdio.h>

void preencher(float *v, int num) {
    int i;
    for (i = 0; i < num; i++) {
        scanf("%f", &v[i]);
    }
}

int conta(float *v, int num){
    int contagem = 0;
    int i;
    int num_int=0;
    for (i = 0; i < num; i++) {
        num_int = v[i];
        if ( !num_int%2 ) {
            contagem ++;
        }
    }

    return contagem;
}

float soma(float *v, int num, int y) {
    float somatorio = 0;
    int i;
    for (i = 0; i < num; i++) {
        if ( v[i]>0 || v[i]== y ) {
            somatorio += v[i];
        }
    }

    return somatorio;
}

int main(void) {
    float v[10] = {1, 2, -3, 4, 5, 6, 7, 8, -9, 8};
    int x, y;

    scanf("%i %i", &x, &y);

    if (x != 9) {
        preencher(v, 10);
        printf("%i", conta(v, 10));
    } else {
        printf("%f", soma(v, 10, y));
    }

    return 0;
}
