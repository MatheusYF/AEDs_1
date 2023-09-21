#include <stdio.h>
#include <stdlib.h>

int main() {

  int lar, com;

  printf("\nDigite a largura da pscina: ");
  scanf("%d", &lar);
  
  printf("\nDigite o comprimento da pscina: ");
  scanf("%d", &com);

  int arp = lar*com;
  printf("\nA area da pscina = %d\n", arp);

  return 0;
}
