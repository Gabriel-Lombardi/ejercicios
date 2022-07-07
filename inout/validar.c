#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char line[20];
  int i = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c != '\n') {
      line[i++] = c;
    } else {
      line[i] = 0;    // null byte para terminar el string
      i = 0;
      if (atoi(line) > 10 && atoi(line) < 20)
        printf("%s\n", line);
    }
  }
  return 0;
}
