#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  if (x == 0 && y == 0) printf("0;0 es la intersección de los 4 cuadrantes, este es el punto de origen\n");
  if (x > 0 && y > 0) printf("El punto pertenece al cuadrante I\n");
  if (x < 0 && y > 0) printf("El punto pertenece al cuadrante II\n");
  if (x < 0 && y < 0) printf("El punto pertenece al cuadrante III\n");
  if (x > 0 && y < 0) printf("El punto pertenece al cuadrante IV\n");
  if (x > 0 && y == 0) printf("El punto está entre el cuadrante I y el IV\n");
  if (x < 0 && y == 0) printf("El punto está entre el cuadrante II y el III\n");
  if (x == 0 && y > 0) printf("El punto está entre el cuadrante I y el II\n");
  if (x == 0 && y < 0) printf("El punto está entre el cuadrante III y el IV\n");
  return 0;
}
