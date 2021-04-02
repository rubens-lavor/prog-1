#include <stdio.h>

int main() {

  char frase[21] = "";
  char letra;

  fgets(frase, 21, stdin);

  setbuf(stdin,NULL);
  scanf("%c", &letra);


  int i = 0;
  int count = 0;

  for (i; i < strlen(frase); i++){
    if (frase[i] == letra){
      count ++;
    }
  }

  printf("%i", count);

  return 0;
}