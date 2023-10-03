#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0; // Repetição
  int car = 0; // Cara
  int cor = 0; // Coroa
  int moe; // Moeda

  do {

    rep = rep + 1;
    printf("\nDigite o resultado da %d moeda\n(1) Cara, (2) Coroa: ", rep);
    scanf("%d", &moe);

    if (moe == 1) {
      car = car + 1;
    }
    else if (moe == 2) {
      cor = cor + 1;
    }

  } while(rep < 5);

  printf("\nCara = %d, Coroa = %d\n", car, cor);
  
  return 0;
}
