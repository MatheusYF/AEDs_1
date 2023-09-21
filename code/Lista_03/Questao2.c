#include <stdio.h>
#include <stdlib.h>

int main() {

  int ano, nac, niver; // Entrada de dados
  
  printf("\nDigite o ano atual: ");
  scanf("%d", &ano);

  printf("\nDigite o ano de nascimento: ");
  scanf("%d", &nac);

  printf("\nDigite (1) se ja realizou aniversario e (2) se ainda nao realizou: ");
  scanf("%d", &niver);

  ano = ano-nac;
  // Estrutura de repetiçao
  if (niver == 2) {
    ano = ano-1;
  }

  if (ano >= 18) {
    printf("\n%d anos ja pode tirar carteira\n", ano);
  }
  else {
    printf("\n%d anos tbm ainda nao pode tirar carteira\n", ano);
  }
  
  return 0;
}
