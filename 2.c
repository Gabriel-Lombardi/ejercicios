#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  bool d = false;
  d = a%b == 0 || b%a == 0;
  printf("%s\n", d? "verdadero" : "falso");
  return 0;
}
