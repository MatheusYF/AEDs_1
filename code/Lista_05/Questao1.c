#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0;
  int som = 0;
  int num = 2;

  do {

    rep += 1;

    som += num;

  } while(rep < 15);

  printf("\nSoma dos 15 primeiros numeros = %d\n", som);

  return 0;
}
