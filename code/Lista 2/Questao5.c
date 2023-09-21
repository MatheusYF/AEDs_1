#include <stdio.h>
#include <stdlib.h>

int main() {

  float num1, num2, res;
  printf("\nDigite o 1 numero: ");
  scanf("%f", &num1);

  int swi;
  printf("\nDigite o operador matematico\n (1)+ (2)- (3)* (4)/\n --> ");
  scanf("%d", &swi);

  printf("\nDigite o 2 numero: ");
  scanf("%f", &num2);

  switch(swi) {

    case 1:
      res = num1+num2;
      printf("\n%.2f + %.2f = %.2f\n", num1, num2, res);
      break;

    case 2:
      res = num1-num2;
      printf("\n%.2f - %.2f = %.2f\n", num1, num2, res);
      break;

    case 3:
      res = num1*num2;
      printf("\n%.2f * %.2f = %.2f\n", num1, num2, res);
      break;

    case 4:
      res = num1/num2;
      printf("%.2f / %.2f = %.2f\n", num1, num2, res);
      break;
  }

  return 0;
}
