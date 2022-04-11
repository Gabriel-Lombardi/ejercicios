#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int random = rand() % 100;
  bool f = false;
  f = n == random;

  printf("%s %d \n", f ? "Ganaste!" : "Perdiste!", random);
  return 0;
}
