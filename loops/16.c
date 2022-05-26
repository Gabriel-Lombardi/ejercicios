#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);

  for (int i = 1; i <= n; i++) {
    int c = 0;
    c = i*i;

    printf("%d -> %d\n", i, c);
  }
  return 0;
}
