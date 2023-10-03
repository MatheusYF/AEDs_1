#include <stdio.h>
#include <stdlib.h>

int main() {

  int num = 1;
  int som = 0;
  
  do {

    som = som + num;

    num = num + 1;

  } while (num <= 50);

  printf("\nSoma = %d\n", som);

  return 0;
}
