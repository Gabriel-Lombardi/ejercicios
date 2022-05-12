#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a = 0;  // f1 = 0
  int b = 1;  // f2 = 1
  int c = 0;

  if (n <= 0) {
    printf("aprendé a usar el programa..."); return 0;
  }
  if (n == 1) {
    printf("%d\n", a);
    return 0;
  }
  if (n == 2) {
    printf("%d %d\n", a, b);
    return 0;
  }

  printf("%d %d ", a, b);

  for (int i = 3; i <= n; i++) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}
