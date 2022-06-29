#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  char *meses[] = {
    "",
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
  };

  if (n > 12 || n < 1) {
    printf("Los meses son 12\n");
    return 1;
  }
  else printf("%s\n", meses[n]);
  return 0;
}
