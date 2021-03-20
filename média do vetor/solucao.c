#include <stdio.h>

void Scanf(char tipo[3],int *num){
  int aux;
  scanf(tipo,&aux);
  *num = aux;
  //printf("%i\n", num);
}

int main(){
  int vet[] = {1,2,3,4,5,6,0,0,8,4,3}, num=1;
  //leitura da quantidade de elementos do vetor necessaria
  Scanf("%i", &num);

  //codifique a partir daqui - não mexer na parte anterior
  //...

  printf("%i\n", num);
  float somatorio = 0.0;
  float media = 0.0;
  int i = 0;
  for(i;i<num;i++){
    somatorio = somatorio + vet[i];
  }

  media = somatorio/num;

  printf("%f", media);
  return 0;
}