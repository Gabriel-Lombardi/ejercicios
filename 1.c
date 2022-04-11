#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int theta = atof(argv[1]);
  printf("%f\n", cos(theta)*cos(theta) + sin(theta)*sin(theta));
  return 0;
}
