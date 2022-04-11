#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int Pe = atoi(argv[1]);
  int r = atoi(argv[2]);
  int t = atoi(argv[3]);
  int dinero = pow(Pe, r * t);

  printf("%d\n", dinero);

  return 0;
}
