#include <stdio.h>
#include <stdlib.h>

int main() {

  float dis, vel;
  printf("\nDigite a distancia percorrida: ");
  scanf("%f", &dis);

  printf("\nDigite a velocidade do movel: ");
  scanf("%f", &vel);

  float temp = dis/vel;
  printf("\nTempo do deslocamento do movel = %.1f\n", temp);

  return 0;
}
