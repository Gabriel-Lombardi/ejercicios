#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double t = atoi(argv[1]);
  printf("%f\n", sin(2 * t) + sin(3 * t));
  return 0;
}
