#include <stdio.h>
#include <stdlib.h>

int main() {

  float temp1, temp2, temp3, med;
  printf("\nDigite a 1 temperatura: ");
  scanf("%f", &temp1);

  printf("\nDigite a 2 temperatura: ");
  scanf("%f", &temp2);

  printf("\nDigite a 3 temperatura: ");
  scanf("%f", &temp3);
  med = (temp1+temp2+temp3/3);

  if (med <= 10) {
    printf("\nMuito frio!\n");
  }
  else if (med > 10 && med <= 20) {
    printf("\nFrio!\n");
  }
  else if (med > 20 && med <= 30) {
    printf("\nQuente!\n");
  }
  else if (med > 30) {
    printf("\nMuito quente!\n");
  }

  return 0;
}
