#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g -9.81

int main(int argc, char *argv[]) {
  double x0 = atoi(argv[1]);
  double v0 = atoi(argv[2]);
  double t = atoi(argv[3]);
  int resultado = x0 + v0 * t + (g/2) * (t * t);

  printf("%d\n", resultado);
  return 0;
}
