#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int som = 0;
  int num = 1;

  do {

    som = som + num;

    num = num + 2;

  } while(num < 50);

  printf("\nSoma = %d\n", som);

  return 0;
}
