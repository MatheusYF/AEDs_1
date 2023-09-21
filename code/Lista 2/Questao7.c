#include <stdio.h>
#include <stdlib.h>

int main() {

  int opt;
  float dis, vel, temp;
  printf("\nDigite qual grandeza deseja calcular\n(1)distancia, (2)velocidade, (3)tempo\n --> ");
  scanf("%d", &opt);

  if (opt == 1) {
    printf("\nDigite a velocidade: ");
    scanf("%f", &vel);

    printf("\nDigite o tempo: ");
    scanf("%f", &temp);

    dis = vel*temp;
    printf("\nDistancia percorida = %.2f\n", dis);
  }
  else if (opt == 2) {
    printf("\nDigite a distancia: ");
    scanf("%f", &dis);

    printf("\nDigite o tempo decorrido: ");
    scanf("%f", &temp);

    vel = dis/temp;
    printf("\nVelocidade foi = %.2f\n", vel);
  }
  else if (opt == 3) {
    printf("\nDigite a distancia percorrida: ");
    scanf("%f", &dis);

    printf("\nDigite a velocidade: ");
    scanf("%f", &vel);

    temp = dis/vel;
    printf("\nTempo decorrido = %.2f\n", temp);
  }

  return 0;
}
