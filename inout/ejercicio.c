#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int opcion = 0;
  char c;
  while (1) {
    system("clear");
    printf("1) Opcion 1\n");
    printf("2) Opcion 2\n");
    printf("3) Salir\n");
    scanf("%d", &opcion);
    getchar(); // esto saca el \n
    switch (opcion) {
      case 1:
        system("clear");
        printf("Elegiste opcion 1\n");
        printf("Presione cualquier tecla para continuar\n");
        scanf("%c", &c);
        break;
      case 2:
        system("clear");
        printf("Elegiste opcion 2\n");
        printf("Presione cualquier tecla para continuar\n");
        scanf("%c", &c);
        break;
      case 3:
        exit(0);
        break;
      case default:
        printf("Error\n");
        exit(0);
        break;
    }
  }
  return 0;
}
