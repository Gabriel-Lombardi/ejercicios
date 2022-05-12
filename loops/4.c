#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);

  for (int i = 0; n > i; i++) {
    printf("Hola mundo\n");
  }
  return 0;
}
