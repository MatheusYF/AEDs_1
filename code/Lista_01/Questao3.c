#include <stdio.h>
#include <stdlib.h>

int main() {

  float bas, alt;

  printf("\nDigite a base do triangulo: ");
  scanf("%f", &bas);

  printf("\nDigite a altura do trangulo: ");
  scanf("%f", &alt);

  float art = (bas*alt)/2;
  printf("\nA area do triangulo e %.2f\n", art);

  return 0;
}
