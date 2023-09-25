#include <stdio.h>
#include <stdlib.h>

int maximo(int max,int maria,int paulo)
{
  if (max < maria) {
    max = maria;
  }
  if (max < paulo) {
    max = paulo;
  }

  return max;
}
int minimo(int min,int maria,int paulo)
{
  if (min > maria) {
    min = maria;
  }
  if (min > paulo) {
    min = paulo;
  }

  return min;
}

int main() {
  // Votos totais
  int nul; 
  int joao = 0;
  int paulo = 0;
  int maria = 0;
  // Maior e Menor votos
  int max;
  int min;
  
  for (int rep = 0; rep < 1;) {

    int x; // Candidato
    printf("\nDigite o numero do candidato que deseja votar:\n (11) Joao, (19) Maria, (23) Paulo\n --> ");
    scanf("%d", &x);
    
    if (x == 11) {
      joao += 1;
    }
    else if (x == 19) {
      maria += 1;
    }
    else if (x == 23) {
      paulo += 1;
    }
    else {
      nul += 1;   
    }
  
    printf("\nProximo participante (0) Sim, (1) Nao: ");
    scanf("%d", &rep);

  }
  
  max = joao;
  min = joao;
  
  int rmaximo=maximo(int max, maria, paulo);
  int rminimo=minimo(int min, maria, paulo);

  printf("\n%d votos foram nulos\nA contagem de votos foi: Joao = %d, Maria = %d, Paulo = %d\n",nul, joao, maria, paulo);

  if (max == joao) {
    printf("Joao foi o mais votado com %d votos\n", max);
  }
  else if (max == maria) {
    printf("Maria foi a mais votada com %d votos\n", max);
  }
  else if (max == paulo) {
    printf("Paulo foi o mais votdo com %d dos votos\n", max);
  }

  if (min == joao) {
    printf("Joao foi o menos votado com %d votos\n", min);
  }
  else if (min == maria) {
    printf("Maria foi a menos votada com %d votos\n", min);
  }
  else if (min == paulo) {
    printf("Paulo foi o menos votado com %d votos\n", min);
  }

  return 0;
}
