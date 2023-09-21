#include <stdio.h>
#include <stdlib.h>

int main() {

  float dia, diap, lot8, lot5; // Entrada de Dados

  printf("\nDigite o valor da diaria do hotel: ");
  scanf("%f", &dia);
  diap = dia*0.75;

  lot5 = dia*(75*0.5);
  lot8 = diap*(75*0.8);
  
  printf("\nO valor da diaria promocional = %.2f\n", diap);
  printf("\nO total arrecadado com 50 porcento de lotacao com valor normal = %.2f\n", lot5);
  printf("\nO total arrecadado com 80 porcento de lotacao com valor promocional = %.2f\n", lot8);

  if (lot5 > lot8) {
    lot5 = lot5-lot8;
    printf("\nA diferenca entre o valor arrecadado = %.2f\n", lot5);
  }
  else if (lot8 > lot5) {
    lot8 = lot8-lot5;
    printf("\nA diferenca entre o valor arrecadado = %.2f\n", lot8);
  }
  else {
    printf("\nNao a diferenca entre os valores arrecadados\n");
  }

  return 0;
}
