/*
Elabore um algoritmo que leia x valores inteiros, sendo o valor x (com x > 0) determinado como primeira entrada do algoritmo.

Atribua cada valor lido para dois vetores conforme: se um valor positivo for digitado, armazene no vetor A, se um valor negativo for digitado, armazene no vetor B. Se um valor zero for digitado, ignore o valor.

Em seguida faça:

Se a quantidade de valores positivos for maior ou igual a quantidade de valores negativos, mostre a média e quantos valores estão acima da média dos valores positivos (valores separados por um espaço).
Se a quantidade de valores negativos for maior do que a quantidade de valores positivos, mostre quantos valores negativos foram fornecidos.
*/

#include <stdio.h>

int main() {
  int numValores = 0;
  int contPositivo = 0;
  int contNegativo = 0;

  float media = 0;

  do {
    scanf("%i", &numValores);
  } while (numValores <= 0);

  int vetA[numValores];

  int i = 0;
  int valor = 0;
  for (i = 0; i < numValores; i++) {
    scanf("%i", &vetA[i]);
    //vetA[i] = valor > 0 ? valor: -valor;
  }

  for (i = 0; i < numValores; i++) {
    if (vetA[i]>0){
      contPositivo++;
    }
    if (vetA[i]<0){
      contNegativo++;
    }
  }

  if (contPositivo >= contNegativo) {
    for (i = 0; i < numValores; i++) {
      media += vetA[i] > 0 ? vetA[i]: 0;
    }
    media = media/contPositivo;
    int cont = 0;

    printf("%f ", media);
    for (i = 0; i < numValores; i++) {
      if (vetA[i] > media){
        cont++;
      }
    }
    printf("%i ", cont);

  }else {
    printf("%i", contNegativo);
  }
  return 0;
}