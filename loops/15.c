#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int t = 0;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
    b--;
  }
  printf("%d\n", a);
  return 0;
}
