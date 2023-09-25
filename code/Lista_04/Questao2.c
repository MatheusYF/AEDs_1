#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int gen, pes; // Genero, Peso
  int rep = 0; // Repetição
  int mas = 0; // Homens
  int fem = 0; // Mulheres

  while (rep < 5) {

    rep = rep+1;
    printf("\nDigite o genero da %d pessoa (1)Masculino, (2)Feminino: ", rep);
    scanf("%d", &gen);

    if (gen == 1) {
      mas = mas+1;
      printf("\nDigite o peso da pessoa: ");
      scanf("%d", &pes);
    }
    else if (gen == 2) {
      fem = fem+1;
      printf("\nDigite o peso da pessoa: ");
      scanf("%d", &pes);
    }
    pes = pes+pes;

  }
  
  pes = pes/5;
  printf("\nNo grupo tem %d Mulheres e %d Homens\n", fem, mas);
  printf("A media dos pesos = %d\n", pes);

  if (fem > mas) {
    printf("Mulheres teve mais ocorrencia\n");
  }
  else {
    printf("Homens teve mais ocorrencia\n");
  }

  return 0;
}
