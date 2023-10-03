#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0;

  int pa = 80000000; // País A
  int pb = 65000000; // País B

  do {

    rep += 1;

    pa = pa+(0.015*pa); // Crecimento Anual pa

    pb = pb+(0.03*pb); // Crecimento Anual pb

  } while(pb <= pa);

  printf("\nSerao necessarios %d anos para a populacao do Pais B superar a do Pais A\n", rep);

  return 0;
}
