#include <stdio.h>

int main ()
{
  // declaracao da varivavel a ser utilizada para a resolucao //
  int n;

  // input dos dados necessarios para a resolucao //
  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);

  // criacao do vetor para a resolucao //
  int vet[n];

  // criacao da leitura dos numeros atraves da regra para (regra padrao para percorrer todos os valores delegados a variavel n) //
  for (int i = 0; i < n; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vet[i]);
  }
  // output da resolucao da situacao proposta //
  printf("\nNumeros negativos:\n");
  for (int i = 0; i < n; i++) {
    if (vet[i] < 0) {
      printf("%d\n", vet[i]);
    }
  }
  return 0;
}