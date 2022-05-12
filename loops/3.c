#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int d = (rand() % 8) + 1;
  if (d < 6) printf("%d\n", d);
  else       printf("6\n");
  return 0;
}
