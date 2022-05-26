#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  srand(time(NULL));
  int number[n];

  for (int i = 0; i < n; i++) {
    number[i] = rand() % m;
    printf("%d\n", number[i]);
  }
  return 0;
}
