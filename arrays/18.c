#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *morse[] = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",
  };
  int i = 0;
  while (argv[1][i] !=0) {
    printf("%s ", morse[argv[1][i] - 'a']);
    i++;
  }
  printf("\n");
  return 0;
}
