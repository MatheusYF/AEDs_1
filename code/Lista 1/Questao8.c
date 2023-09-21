#include <stdio.h>
#include <stdlib.h>

int main() {

  int vel, temp;
  printf("\nDigite a velocidade: ");
  scanf("%d", &vel);

  printf("\nDigite o tempo: ");
  scanf("%d", &temp);

  int dis = vel*temp;
  printf("\nA distancia percorida pelo movel = %d\n", dis);

  return 0;
}
