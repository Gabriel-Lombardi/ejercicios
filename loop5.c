#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int i = 1000;
  while (i <= 1999) {
    printf("%d ", i);
    i++;
    if (i % 5 == 0) printf("\n");
  }
  return 0;
}
