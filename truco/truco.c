#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int carta_mayor(int a, int b) {
  return a >= b ? a : b;
}

int segunda_carta(int a, int b, int c) {
  if ((a >= b && a <= c) || (a <= b && a >= c)) return a;
  else {
    return segunda_carta(b, c, a);
  }
}

int envido(int a, char p1, int b, char p2, int c, char p3) {
  int c_mayor = carta_mayor(carta_mayor(a,b), c);
  int c_media = segunda_carta(a, b, c);

  if (a >= 10)      a = 0;
  else if (b >= 10) b = 0;
  else if (c >= 10) c = 0;

  if (p1 != p2 && p1 != p3 && p2 != p3) return c_mayor;
  else if (p1 == p2 && p2 == p3)        return 20 + c_mayor + c_media;
  else if (p1 == p2)                    return 20 + a + b;
  else if (p1 == p3)                    return 20 + a + c;
  else if (p2 == p3)                    return 20 + b + c;
}

int main(int argc, char *argv[]) {
  int a, b, c;
  char p1, p2, p3;
  printf("Ingrese su mano: ");
  scanf("%d %c %d %c %d %c", &a, &p1, &b, &p2, &c, &p3);
  printf("\n");
  printf("Su tanto para el envido es: %d\n", envido(a, p1, b, p2, c, p3));
  return 0;
}
