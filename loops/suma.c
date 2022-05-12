#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int suma = 0;
  int contador = 0;

  while (contador <= n) {
    suma += contador;
    contador++;
  }
  printf("%d\n", suma);
  return 0;
}
