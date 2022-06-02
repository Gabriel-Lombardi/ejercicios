#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int number[100];
  int max = INT_MIN;
  int min = INT_MAX;

  for (int i = 0; i < 100; i++) {
    number[i] = rand() % 100+1;
    if (number[i] > max) max = number[i];
    if (number[i] < min) min = number[i];
  }
  printf("%d %d\n", max, min);
  return 0;
}
