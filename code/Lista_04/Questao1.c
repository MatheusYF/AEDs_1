#include <stdio.h>
#include <stdlib.h>

int main() {
  // Entrada de dados
  int rep = 0; // Repetição
  float med; // Media
  float not; // Nota

  while (rep < 10) {

    rep = rep +1;

    printf("\nDigite a nota do %d aluno: ", rep);
    scanf("%f", &not);
    
    med = med + not;

  }

  med = med/10;
  printf("\nA media da turma = %.2f\n", med);

  return 0;
}
