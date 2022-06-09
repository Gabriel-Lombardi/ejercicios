#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void) {
  // que no sean siempre los mismos caminos
  srand(time(NULL));
  bool win = false;
  // primero la grilla
  int grilla[15][15];
  // blanquear esta matriz
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      grilla[i][j] = 0;
    }
  }
  // la posición inicial
  int x = 7;
  int y = 7;
  // k es el contador de cantidad de pasos
  int k = 1;
  grilla[x][y];

  // tirando un random para ver a donde va
  for (int i = 0; i < 50; i++) {
    int r = rand() % 4;
    if (r == 0 && grilla[x+1][y] == 0) { x++; k++; }
    if (r == 1 && grilla[x][y+1] == 0) { y++; k++; }
    if (r == 2 && grilla[x-1][y] == 0) { x--; k++; }
    if (r == 3 && grilla[x][y-1] == 0) { y--; k++; }
    if (x > 14 || x < 0 || y > 14 || y < 0) {
      win = true;
      break;
    }
    grilla[x][y] = k;
  }
    // imprimimos la grilla a ver que hizo el caminante
    for (int i = 0; i < 15; i++) {
      for (int j = 0; j < 15; j++) {
        printf("%02d ", grilla[i][j]);
      }
      printf("\n");
    }
  printf("\n%s\n", win ? "ganaste" : "perdiste");
  return 0;
}
