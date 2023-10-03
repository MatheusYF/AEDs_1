#include <stdio.h>
#include <stdlib.h>

int main() {

  float som = 0;
  float num = 1;
  float den = 0;

  do {

    den = den + 1;
    som = som + (num/den);  

  } while(den <=40);

  printf("\nSoma = %.2f\n", som);

  return 0;
}
