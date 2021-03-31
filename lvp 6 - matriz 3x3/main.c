#include <stdio.h>

int main() {
    int count = 0;
    int matriz[3][3];

    int i = 0;
    int j = 0;

    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        scanf("%d", &matriz[i][j]);
        if (matriz[i][j] % 2 == 1) {
          count++;
        }
      }
    }

    printf("%i", count);
    return 0;
}
