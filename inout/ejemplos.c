#include <stdio.h>
#include <stdlib.h>
#include <MAXLINE>

int main(int argc, char *argv[]) {
  int c;
  char buf[100];
  int i = 0;
  while ((c = getchar()) != '\n' && i <= 100)
    buf[i++] = c;
  buf[i] = 0;
  int numerito = atoi(buf);
  printf("%d\n", numerito);
  return 0;
}
