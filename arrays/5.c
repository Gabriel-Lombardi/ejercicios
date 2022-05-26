#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int number[100];

  for (int i = 0; i < 100; i++) {
    number[i] = rand() % 101;
    
  }
  return 0;
}
