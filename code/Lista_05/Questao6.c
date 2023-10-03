#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0;

  int vot;  // Votos

  int joa = 0;  // Joao
  int mar = 0; // Maria
  int nul = 0; // Nulo

  do {

    printf("\nDigite o candidado escolhido\n (1) Joao, (2) Maria, (3) Nulo: ");
    scanf("%d", &vot);

    if (vot == 1) {
      joa += 1;
    }
    else if (vot == 2) {
      mar += 1;
    }
    else {
      nul += 1;
    }

    rep += 1;

  } while(rep < 8);

  printf("\nVotos: Joao = %d, Maria = %d, Nulo = %d\n", joa, mar, nul);

  if (joa > mar) {
    printf("\nJoao foi o vencedor !!!\n");
  }
  else if (mar > joa) {
    printf("\nMaria foi a vencedora !!!\n");
  }
  else {
    printf("\nEmpate!\n");
  }

  nul = nul*12.5;
  printf("\nA porcentagem de nulos foi de %d\n", nul);

  return 0;
}
