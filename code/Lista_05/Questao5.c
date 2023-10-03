#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0;
  int mas = 0;
  int fem = 0;
  int sim = 0;
  int nao = 0;

  int gen; // Genero
  int vot; // Voto

  int sif = 0; // Mulheres que responderam sim
  int nam = 0; // Homens que responderam não

  do {

    rep += 1;

    printf("\nDigite o genero (1) Masculino, (2) Feminino: ");
    scanf("%d", &gen);

    if (gen == 1) {
      mas += 1;
      printf("\nDigite o voto (1) Sim, (2) Nao: ");
      scanf("%d", &vot);

      if (vot == 1) {
        sim += 1;
      }
      else if (vot == 2) {
        nao += 1;
        nam += 1;
      }

    }

    else if (gen == 2) {
      fem += 1;
      printf("\nDigite o voto (1) Sim, (2) Nao: ");
      scanf("%d", &vot);

      if (vot == 1) {
        sim += 1;
        sif +=1;
      }
      else if (vot == 2) {
        nao += 1;
      }

    }

  } while(rep < 7);

  printf("\n%d Sim e %d Nao ocorreram\n", sim, nao);
  printf("\n%d Homens e %d Mulheres no grupo\n", mas, fem);
  printf("\n%d Mulheres responderam Sim\n%d Homens responderam Nao\n", sif, nam);

  return 0;
}
