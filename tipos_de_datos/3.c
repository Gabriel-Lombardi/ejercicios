#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  bool s = false;
  s = a >= b+c || b >= a+c || c >= a+b;
  printf("%s\n", s? "verdadero" : "falso");
  return 0;
}
