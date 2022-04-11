#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int dias = atoi(argv[1]);
  printf("%d años \n", dias / 365);
  dias %= 365;
  printf("%d meses \n", dias / 30);
  dias %= 30;
  printf("%d semanas \n", dias / 7);
  dias %= 7;
  printf("%d dias \n", dias);
  return 0;
}
