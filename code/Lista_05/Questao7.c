#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0;
  int hom = 0;
  int mul = 0;

  int opt1, opt2, opt3;

  int peh = 0;  // Peso Homens
  int pem = 0;  // Peso Mulheres
  int idh = 0;  // Peso Homens
  int idm = 0;  //Peso Mulheres

  do {

    rep += 1;
    printf("\nDigite o genero da %d pessoa (1) Homem, (2) Mulher: ", rep);
    scanf("%d", &opt1);

    if (opt1 == 1) {
      hom += 1;

      printf("\nDigite o Peso da pessoa: ");
      scanf("%d", &opt2);
      peh += opt2;

      printf("\nDigite a Idade da Pessoa: ");
      scanf("%d", &opt3);
      idh += opt3;

    }
    else if (opt1 == 2) {
      mul += 1;

      printf("\nGigite o Peso da pessoa: ");
      scanf("%d", &opt2);
      pem += opt2;

      printf("\nDigite a Idade da pessoa: ");
      scanf("%d", &opt3);
      idm += opt3;

    }

  } while(rep < 5);

  printf("\nO numero de Homens = %d e o numero de Mulheres = %d\n", hom, mul);

  peh /= hom;
  printf("\nA media do peso dos Homens = %d\n", peh);

  idm /= mul;
  printf("\nA media da idade da Mulheres = %d\n", idm);

  peh *= hom;
  idm *= mul;
  peh = (peh+pem)/8;
  idm = (idh+idm)/8;
  
  printf("\nA media do peso e da idade do grupo e %d e %d respectivamente\n", peh, idm);
  

  return 0;
}
