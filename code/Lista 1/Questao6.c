#include <stdio.h>
#include <stdlib.h>

int main() {

  int id1, id2, id3;
  printf("\nDigite a idade da 1 pessoa: ");
  scanf("%d", &id1);

  printf("\nDigite a idade da 2 pessoa: ");
  scanf("%d", &id2);

  printf("\nDigite a idade da 3 pessoa: ");
  scanf("%d", &id3);

  int med = (id1+id2+id3)/3;
  printf("\nA media das idades = %d\n", med);

  return 0;
}
