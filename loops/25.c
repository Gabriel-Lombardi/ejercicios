#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int v = 0;

  if (n == 0) printf("El valor absoluto de 0 es 0\n");
  else if (n > 0) printf("El valor absoluto de %d es %d\n", n, n);
  else {
    v = n * -1;
    printf("El valor absoluto de %d es %d\n", n, v);
  }
  return 0;
}
