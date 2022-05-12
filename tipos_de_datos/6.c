#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int d1 = rand() % 6 +1;
  int d2 = rand() % 6 +1;
  printf("%d %d\n", d1, d2);

  return 0;
}
