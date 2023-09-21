#include <stdio.h>
#include <stdlib.h>

int main() {

  int nac, atu, idd;
  printf("\nDigite o ano de nacimento: ");
  scanf("%d", &nac);

  printf("\nDigite o ano atual: ");
  scanf("%d", &atu);
  idd = atu-nac;
  
  if (idd <= 10) {
    printf("\nCrianca\n");
  }
  else if (idd > 10 && idd <= 17) {
    printf("\nAdolecente\n");
  }
  else if (idd >= 18) {
    printf("\nAdulto\n");
  }

  return 0;
}
