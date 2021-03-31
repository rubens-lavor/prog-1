#include <stdio.h>

int main() {

  char frase[400] = "";
  int strlen_palavra = 0;

  fgets(frase, 400, stdin);

  int i = 0;
  int j = 0;

  for (i; i < strlen(frase); i++){
    if (frase[i] == ' ' || i == strlen(frase)-1){
      //frase[i] = '\n';
      j = i-1;
      for (j; j >= strlen_palavra; j--) {
        printf("%c",frase[j]);
      }
      printf("\n");
      strlen_palavra = i + 1;
    }
  }


  return 0;
}