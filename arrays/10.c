#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *palos[] = {"Espada", "Basto", "Copa", "Oro"}
  char *numeros[] = {
    "Ancho",
    "Dos",
    "Tres",
    "Cuatro",
    "Cinco",
    "Seis",
    "Siete",
    "Sota",
    "Caballo",
    "Rey",
  };
  char *mazo[40];
  mazo[0] = strcat(palos[0], numeros[0]);
  printf("%s\n", mazo);

  return 0;
}
