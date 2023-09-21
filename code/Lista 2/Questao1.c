#include <stdio.h>
#include<stdlib.h>

int main() {

  float num1, num2;
  printf("\nDigite um numero: ");
  scanf("%f", &num1);

  printf("\nDigite outro numero: ");
  scanf("%f", &num2);

  if (num1 > num2) {
    printf("\n%.1f e o maior numero\n%.1f e o menor numero\n", num1, num2);
  }
  else if (num1 < num2) {
    printf("\n%.1f e o maior numero\n%.1f e o menor numero\n", num2, num1);
  }
  else {
    printf("\nOs dois numeros sao iguais\n");
  }

  return 0;
}
