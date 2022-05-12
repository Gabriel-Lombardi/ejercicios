#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int v1 = atoi(argv[1]);
  int v2 = atoi(argv[2]);
  int u1 = atoi(argv[3]);
  int u2 = atoi(argv[4]);

  int vu1 = v1 + u1;
  int vu2 = v2 + u2;

  printf("%d %d \n", vu1, vu2);
  return 0;
}
