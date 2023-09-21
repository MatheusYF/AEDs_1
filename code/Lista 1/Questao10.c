#include <stdio.h>
#include <stdlib.h>

int main() {

  float real, dol, eur;
  printf("\nDigite quantos reais deseja converter: ");
  scanf("%f", &real);

  printf("\nPara qual moeda deseja converter (1)dolar, (2)euro: ");
  int opt;
  scanf("%d", &opt);

  if (opt == 1) {
    printf("\nDigite o cambio do dolar: ");
    scanf("%f", &dol);
    real = real/dol;
    printf("\nA conversao com o cambio de %.2f dolares = %.2f reais\n", dol, real);
  }
  else if ( opt == 2) {
    printf("\nDigite o cambio do euro: ");
    scanf("%f", &eur);
    real = real/eur;
    printf("\nA conversao com o cambio de %.2f euros = %.2f reais\n", eur, real);
  }

  return 0;
}
