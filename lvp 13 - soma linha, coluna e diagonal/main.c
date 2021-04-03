#include <stdio.h>

int main() {
  int n = 0;
  int diagonal = 0;
  int linha = 0;
  int coluna = 0;
  int i = 0;
  int j = 0;

  scanf("%d", &n);

  int matriz[n][n];

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  // linha
  for (i = 0; i < n; i++) {
    linha += matriz[0][i];
  }

  // coluna
  for (i = 1; i < n; i++) {
    coluna += matriz[i][0];
  }

  // diagonal
  for (i = 1; i < n; i++) {
    for (j = 1; j < n; j++) {
      if (i == j) {
        diagonal += matriz[i][j];
      }
    }
  }

  printf("%i", linha + coluna + diagonal);

  return 0;

}
