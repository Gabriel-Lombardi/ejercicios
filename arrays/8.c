#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int numeros[6] = {1, 2, 3, 4, 5, 6};
  int temp = 0;
  for (int j = 0; j < 6; j++) printf("%d", numeros[j]);
  printf("\n");

  for (int i = 0; i < 3; i++) {
    temp = numeros[i];
    numeros[i] = numeros[6 - i - 1];
    numeros[6 - i - 1] = temp;
  }
  for (int j = 0; j < 6; j++) printf("%d", numeros[j]);
  printf("\n");
  return 0;
}
