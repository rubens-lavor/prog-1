#include <stdio.h>

int main() {
    float alunoN1 = 0, alunoN2 = 0;
    //float media = 0.0;
    float vet_medias[100];
    int cont = 0;

    while (alunoN2 != 50 || alunoN1 != 50) {

      scanf("%f", &alunoN1);
      if (alunoN1 == 50) {
       break;
      } else {
        scanf("%f", &alunoN2);
        if (alunoN2 == 50) {
          break;
        }
      }
      vet_medias[cont] = (alunoN1 + alunoN2)/2.0;
      cont ++;
    }

    int i = 0;
    for (i; i < cont; i++){
      printf("%g", vet_medias[i]);
      if(i != (cont - 1)){
        printf(" ");
      }
    }

    return 0;
}
