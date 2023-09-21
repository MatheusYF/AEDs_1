#include <stdio.h>
#include <stdlib.h>

int main() {

  int num1, num2, res; // Entrada de dados

  printf("\nDigite o 1 numero: ");
  scanf("%d", &num1);

  printf("\nDigite o 2 numero: ");
  scanf("%d", &num2);

  res = num1+num2;
     // Estrutura de repetiçao
  if (res >= 10) {
    res = res+5;
    printf("\nComo %d + %d >= 10 se soma +5 = %d\n", num1, num2, res);
  }

  else {
    res = res+7;
    printf("\nComo %d + %d < 10 se soma +7 = %d\n", num1, num2, res);
  }

  return 0;
}
