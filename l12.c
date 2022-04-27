#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  while (n > 0) {
    printf("%d\n", n%10);
    n /= 10;
  }
  printf("\n");
  return 0;
}
