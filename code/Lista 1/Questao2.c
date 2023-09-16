#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("\nDigite o ano atual: ");
  int a1;
  scanf("%d", &a1);

  printf("\nDigite o ano de nacimento: ");
  int a2;
  scanf("%d", &a2);

  int i = a1-a2;
  printf("\nIdade = %d\n", i);

  return 0;
}
