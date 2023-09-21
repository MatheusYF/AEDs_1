#include <stdio.h>
#include <stdlib.h>

int main() {

  float dis, temp;
  printf("\nInsira a distancia percorrida: ");
  scanf("%f", &dis);

  printf("\nInsira o tempo decorrido: ");
  scanf("%f", &temp);

  float vel = dis/temp;
  printf("\nA velocidade de deslocamento do movel foi = %.1f\n", vel);

  return 0;
}
