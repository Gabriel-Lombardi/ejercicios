#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int h = atoi(argv[1]);
  int s = atoi(argv[2]);
  int st = h * s;

  printf("%d\n", st);
  return 0;
}
