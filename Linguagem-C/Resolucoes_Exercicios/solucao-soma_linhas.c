#include <stdio.h>

int main () 
{
  // declaracao das variaveis a serem utilizadas na resolucao //
  int m, n;

  // input de dados sobre o tamanho da matriz //
  printf("Qual a quantidade de linhas da matriz? ");
  scanf("%d", &m);

  printf("Qual a quantidade de colunas da matriz? ");
  scanf("%d", &n);

  // criacao da matriz baseada nos valores alocados nas variaveis m e n //
  double mat[m][n];

  // criacao da regra for para leitura das linhas e colunas da matriz para alocar as respostas //
  for (int i = 0; i < m; i++) {
    printf("Digite os elementos da %da linha:\n", i+1);
    for (int j = 0; j < n; j++) {
      scanf("%lf", &mat[i][j]);
    }
  }

  // criacao de vetor e da regra for para alocar a soma das linhas correspondentes da matriz //
  double vet[m];
  for (int i = 0; i < m; i++) {
    vet[i] = 0;
    for (int j = 0; j < n; j++) {
      vet[i] = vet[i] + mat[i][j];
    }
  }

  // output dos dados apos coleta e processamento //
  printf("Valor gerado:\n");
  for (int i = 0; i < m; i++) {
    printf("%.1lf\n", vet[i]);
  }
  
  return 0;
}