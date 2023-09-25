#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int num = 1; // Numerador
  int den = 1; // Denominador
  int rep = 0; // Repetição
  int som; // Soma

  while (rep < 49) {

    rep = rep+1;

    num = num+2;
    den = den+1;

    som = (num/den);

  }

  printf("\nsom = %d/%d\n", num, den);

  return 0;
}
