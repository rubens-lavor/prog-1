#include <stdio.h>

int binario(int valor) {
    if (valor == 0) {
        return 0;
    }
    return binario(valor / 2) * 10 + valor % 2;
}

int octal(int valor) {
    if (valor == 0) {
        return 0;
    }
    return octal(valor / 8) * 10 + valor % 8;
}

int main() {
    int numero = 0;
    
    scanf("%d", &numero);
    while(numero < 0){
        scanf("%d", &numero);
    }

    printf("%d\n", binario(numero));
    printf("%d\n", octal(numero));

    
    return 0;
    
}