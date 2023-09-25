#include <stdio.h>
#include <stdlib.h>

int main() {

  int nota; // Entrada de dados

  printf("\nDigite sua nota (0 a 10): ");
  scanf("%d", &nota);

  if (nota < 5) {
    printf("\nInsatisfatorio\n");
  }
  else if (nota >= 5 && nota < 7) {
    printf("\nRegular\n");
  }
  else if (nota >= 7 && nota < 8) {
    printf("\nBom\n");
  }
  else if (nota >= 8 && nota <= 10) {
    printf("\nOtimo\n");
  }

  return 0;
}
