#include <stdio.h>
#include <stdlib.h>

int main() {

  int max, vel; // Entrada de dados
  
  printf("\nDigite a velocidade maxima permitida em Km/h: ");
  scanf("%d", &max);

  printf("\nDigite a velocidade do motorista em Km/h: ");
  scanf("%d", &vel);

  if (vel <= max) {
    printf("\nMotorista respeitou a lei\n");
  }
  else if (vel > max && vel <= max+10) {
    printf("\nAte 10 km/h acima da velocidade permitida: Multa de 50 reais\n");
  }
  else if (vel > max+10 && vel <= max+30) {
    printf("\nAte 30 Km/h acima da velocidade permitida: Multa de 100 reais\n");
  }
  else if (vel > max+30) {
    printf("\nAcima de 30 Km/h da velocidade permitida: Multa de 200 reais\n");
  }

  return 0;
}
