#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  if (a = 0) {
    printf("Error\n");
  } else {
    int disc = b * b - 4 * a * c;
    if (disc < 0) {
      printf("No hay raíces R\n");
    }
    else {
      int resolvente = (-b + sqrt(disc)) / 2*a;
      int resolventen = (-b - sqrt(disc)) / 2*a;
      printf("%d\n", resolvente);
      printf("%d\n", resolventen);
    }
  }
  return 0;
}
