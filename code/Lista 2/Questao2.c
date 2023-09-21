#include <stdio.h>
#include <stdlib.h>

int main() {

  int num1, num2, num3;
  printf("\nDgite o 1 numero: ");
  scanf("%d", &num1);

  printf("\nDigite o 2 numero: ");
  scanf("%d", &num2);

  printf("\nDigite o 3 numero: ");
  scanf("%d", &num3);

  int max = num1;
  int min = num1;

  if (max < num2) {
    max = num2;
  }
  if (max < num3) {
    max = num3;
  }

  if (min > num2) {
    min = num2;
  }
  if (min > num3) {
    min = num3;
  }

  printf("\nO maior numero e %d e o menor %d\n", max, min);

  return 0;
}
