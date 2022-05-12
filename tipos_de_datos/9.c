#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int d = atoi(argv[1]);
  int m = atoi(argv[2]);
  bool f = false;
  f = d >= 20 && m == 3 || d <= 20 && m == 6 || m == 4 || m == 5;

  printf("%s\n", f ? "verdadero" : "falso");

  return 0;
}
