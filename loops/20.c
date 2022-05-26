#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  if (a > b) printf("El primer número debe ser más chico que el segundo\n");
  else for (int i = a; i < b; i++) {
    if (i % 3 == 0) printf("%d\n", i);
  }
  return 0;
}
