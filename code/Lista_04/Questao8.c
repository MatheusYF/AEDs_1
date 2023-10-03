#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  float som = 0;
  float num = 1;
  float den = 1;

  do {

    som = som + (num/den);

    den = den + 1;

  } while(den <= 10);

  printf("\nSoma = %.2f\n", som);

  return 0;
}
