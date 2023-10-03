#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int num;
  int som = 1;

  printf("\nDigite um numero inteiro e positivo: ");
  scanf("%d", &num);

  do {

    som = som*num;
    num -= 1;

  } while(num > 1);

  printf("\nFatorial = %d\n", som);

  return 0;
}
