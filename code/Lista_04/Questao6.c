#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0;
  int num = 0;
  int par = 0;
  int imp = 0;

  do {

    rep = rep + 1;
    printf("\nDigite o %d numero: ", rep);
    scanf("%d", &num);

    if (num %2 == 0) {
      printf("\nNumero par !!!");
      par = par + 1;
    }
    else {
      printf("\nNumero impar !!!");
      imp = imp + 1;
    }

  } while(rep < 8);

  printf("\nTotal de pares = %d\nTotal de impares = %d\n", par, imp);

  return 0;
}
