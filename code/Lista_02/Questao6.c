#include <stdio.h>
#include <stdlib.h>

int main() {

  int obj;
  float lad, bas, area;

  printf("\nDigite qual forma geometrica deseja calcular a area\n(1) quadrado, (2) retangulo, (3) cubo, (4) triangulo retangulo\n --> ");
  scanf("%d", &obj);

  switch(obj) {

    case 1:
      printf("\nDigite o lado do quadrado: ");
      scanf("%f", &lad);

      area = lad*lad;
      printf("\nArea do quadrado = %.2f\n", area);
      break;

    case 2:
      printf("\nDigite o lado do retangulo: ");
      scanf("%f", &lad);
      printf("\nDigite a base do retangulo: ");
      scanf("%f", &bas);

      area = lad*bas;
      printf("\nArea do retangulo = %.2f\n", area);
      break;

    case 3:
      printf("\nDigite o lado de uma face do cubo: ");
      scanf("%f", &lad);

      area = (lad*lad)*6;
      printf("\nArea do cubo = %.2f\n", area);
      break;

    case 4:
      printf("\nDigite a altura do triangulo: ");
      scanf("%f", &lad);
      printf("\nDigite a base do triangulo: ");
      scanf("%f", &bas);

      area = (lad*bas)/2;
      printf("\nArea do triangulo retangulo = %.2f\n", area);
      break;
  }

  return 0;
}
