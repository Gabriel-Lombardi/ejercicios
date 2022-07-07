#include <stdio.h>

int main(int argc, char *argv[]) {
  int numerito;
  int r;
  do {
    printf("Dame numerito\n");
    int r = scanf("d", &numerito);
  } while (scanf("%d\n", &numerito) != 1);

  printf("Tu numerito es %d\n", );
  return 0;
}
