#include <stdio.h>

int main(void) {
  int n, m;
  int suma = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    suma+= m;
  }
  printf("%d\n", n);
  return 0;
}
