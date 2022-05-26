#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int number[10] = {0,1,2,3,4,5,6,7,8,9};

  for (int i = 0; i < n; i++) printf("%d\n", number[i]);
  return 0;
}
