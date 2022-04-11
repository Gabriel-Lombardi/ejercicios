#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  int theta = sqrt(x * x + y * y);
  int rho = atan2(y, x);

  printf("%d %d\n", rho, theta);
  return 0;
}
