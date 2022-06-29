#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int numeros[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int cero = 0;
  int uno = 0;
  int dos = 0;
  int tres = 0;
  int cuatro = 0;
  int cinco = 0;
  int seis = 0;
  int siete = 0;
  int ocho = 0;
  int nueve = 0;

  for (int i = 0; i < 100; i++) {
    int r = rand() % 10;
    if (r == 0) cero++;
    if (r == 1) uno++;
    if (r == 2) dos++;
    if (r == 3) tres++;
    if (r == 4) cuatro++;
    if (r == 5) cinco++;
    if (r == 6) seis++;
    if (r == 7) siete++;
    if (r == 8) ocho++;
    if (r == 9) nueve++;
  }
  printf("0: %d\n", cero);
  printf("1: %d\n", uno);
  printf("2: %d\n", dos);
  printf("3: %d\n", tres);
  printf("4: %d\n", cuatro);
  printf("5: %d\n", cinco);
  printf("6: %d\n", seis);
  printf("7: %d\n", siete);
  printf("8: %d\n", ocho);
  printf("9: %d\n", nueve);
  return 0;
}
