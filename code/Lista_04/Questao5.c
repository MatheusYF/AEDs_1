#include <stdio.h>
#include <stdlib.h>

int main() {

  int rep = 0;
  int num;

  do {

    rep = rep+1;

    printf("\nDigite o %d numero: ", rep);
    scanf("%d", &num);

    if (num %3 == 0) {
      printf("\nE diviisivel por 3\n");
    }
    else {
      printf("\nNao e divisivel por 3\n");
    }

  } while(rep < 5);

  return 0;
}
