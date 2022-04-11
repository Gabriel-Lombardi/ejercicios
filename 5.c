#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int r = (rand() % (b - a + 1)) + a;
  printf("%d\n", r);
  return 0;
}
