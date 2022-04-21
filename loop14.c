#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int res = 1;
  int n = atoi(argv[1]);

  if (n == 0) {
    printf("%d\n", res);
  } else {
    while (n > 0) {
      printf("%d\n", n);
      res = res * n;
      n--;
    }
    printf("%d\n", res);
  }
  return 0;
}
