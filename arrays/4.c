#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int number[100];
  float suma = 0.0;

  for (int i = 0; i < 100; i++) {
    number[i] = rand() % 101;
    suma += number[i];
  }
  suma /= 100.0;
  printf("%.2f\n", suma);
  return 0;
}
