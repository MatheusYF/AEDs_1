#include <stdio.h>
#include <stdlib.h>

int main() {

  int opt;  // Entrada de dados
  float sal;

  printf("\nDigite o salario: ");
  scanf("%f", &sal);

  printf("\nDigite (1) aumento de 8 porcento, (2) aumento de 11 porcento (3) aumento fixo: ");
  scanf("%d", &opt);

  switch (opt) {
    case 1:
      sal = sal*1.08;
      printf("\nO salario com aumento de 8 porcento = %.2f\n", sal);
      break;

    case 2:
      sal = sal*1.11;
      printf("\nO salario com aumento de 11 porcento = %.2f\n", sal);
      break;

    case 3:
      if (sal <= 1000) {
        sal = sal+350;
        printf("\nComo o salario e de ate de 1000 o aumento e de 350 = %.2f\n", sal);
      }
      else {
        sal = sal+200;
        printf("\nComo o salario e acima de 1000 o aumento e de 200 = %.2f\n", sal);
      }
  }

  return 0;
}
