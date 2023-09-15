#include <stdio.h>
#include <stdlib.h>

int main() {

  int n1, n2, n3;
  printf("\nDigite 3 numeros\n");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  int r = n1+n2+n3;
  printf("\n%d + %d + %d = %d\n", n1, n2, n3, r);

  return 0;
}
