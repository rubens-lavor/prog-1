#include <stdio.h>

int main() {
  int aux_maior = 0;
  int aux_menor = 0;
  int valores[10] = {};

  int i = 0;
  for(i;i<10;i++){
    scanf("%i", &valores[i]);
  }

  i=1;
  aux_maior = valores[0];
  aux_menor = valores[0];

  for(i;i<10;i++){
    if (aux_maior < valores[i]){
      aux_maior = valores[i];
    }
    if (aux_menor > valores[i]){
      aux_menor = valores[i];
    }
    
  }

  printf("%i %i", aux_maior, aux_menor);

  return 0;
}