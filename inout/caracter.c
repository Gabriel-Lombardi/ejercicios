#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  return 0;
}
