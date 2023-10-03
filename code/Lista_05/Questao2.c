#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int som = 0;
  int num = -7;
  int rep = 0;

  do {

    rep += 1;
    
    som += num;

    num += 2;

  } while(rep < 10);

  printf("\nSoma dos 10 primeiros numeros = %d\n", som);

  return 0;
}
