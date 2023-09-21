#include <stdio.h>
#include <stdlib.h>

int main() {

  int lad;
  printf("\nDigite o lado do cubo: ");
  scanf("%d", &lad);

  int arc = (lad*lad)*6;
  printf("\nArea do cubo = %d\n", arc);

  return 0;
}
