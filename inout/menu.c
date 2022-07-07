#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int opcion;
  srand(opcion);
  while (1) {
    printf("1 - Tipos de Datos\n");
    printf("2 - Loops y Condicionales\n");
    printf("3 - Arrays\n");
    printf("4 - I/O\n");
    printf("5 - Funciones\n");
    printf("6 - Salir\n");
    printf("Elegí una opción: ");
    scanf("%d", &opcion);

    int nota = rand() % 10 + 1;

    switch (opcion) {
      case 1:
        printf("\n");
        printf("Te sacaste un %d en Tipos de Datos.\n", nota);
        printf("\n");
        break;
      case 2:
        printf("\n");
        printf("Te sacaste un %d en Loops y Condicionales.\n", nota);
        printf("\n");
        break;
      case 3:
        printf("\n");
        printf("Te sacaste un %d en Arrays\n", nota);
        printf("\n");
        break;
      case 4:
        printf("\n");
        printf("Te sacaste un %d en Input/Ouput.\n", nota);
        printf("\n");
        break;
      case 5:
        printf("\n");
        printf("Te sacaste un %d en Funciones\n", nota);
        printf("\n");
        break;
      case 6:
        return 0;
      default:
        printf("\n");
        printf("No conozco esa opción\n");
        printf("\n");
        break;
    }
  }
}
