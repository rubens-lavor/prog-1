#include <stdio.h>

int main(){
  int vet[] = {1,2,3,4,5,6,0,0,8,4,3}, num;
  //leitura da quantidade de elementos do vetor necessaria
  scanf("%i", &num);

  //codifique a partir daqui - não mexer na parte anterior
  //...

  int somatorio = 0;
  float media = 0.0;
  int i = 0;
  for(i;i<num;i++){
    somatorio = somatorio + vet[i];
  }

  media = somatorio/num;

  printf("%f", media);
  return 0;
}