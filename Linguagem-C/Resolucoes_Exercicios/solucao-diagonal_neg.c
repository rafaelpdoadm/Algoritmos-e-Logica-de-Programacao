#include <stdio.h>

int main () {
  // declaracao das variaveis a serem utilizadas para a solucao do problema //
  int n, qtdneg;

  // input dos dados da ordem da matriz a ser construida para a resolucao //
  printf("Qual a ordem da matriz? ");
  scanf("%d", &n);

  // criacao da matriz //
  int mat [n][n];

  // abertura da regra for para a alocacao dos numeros dados pelo usuario na matriz de ordem n //
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Elemento [%d, %d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  // criacao da regra for para percorrer a diagonal principal da matriz //
  printf("Diagonal principal:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", mat[i][i]);
  }

  // criacao da regra for para percorrer toda a matriz buscando valores negativos //
  qtdneg = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (mat[i][j] < 0) {
        qtdneg++;
      }
    }
  }

  // output dos dados coletados nos codigos escritos acima e resolucao da situacao proposta //
  printf("\nQuantidade de negativos = %d\n", qtdneg);

  return 0;
}