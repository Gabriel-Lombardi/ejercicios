#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  int i = 0;
  i = strlen(palabra);

  scanf("%[^\n]", palabra);
  printf("%d\n", i);
  return 0;
}
