#include <stdio.h>

int main ()
{
  // declaracao das variaveis a serem utilizadas //
  int n;
  double soma, media;

  // input para a declaracao dos dados a serem utilizados na situacao //
  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);

  // declaracao do vetor a ser utilizado que tera caracteres de acordo com a variavel n //
  double vet[n];

  // criacao da regra for (para) para coletar todos os valores a serem alocados no vetor //
  for (int i = 0; i < n; i++) {
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);
  }

  // output de valores a serem mostrados, segundo o pedido na situacao // 
  printf("\nValores: ");
  for (int i = 0; i < n; i++) {
    printf("%.2lf ", vet[i]);
  }

  printf("\n");

  //output da soma de todos os valores do vetor e dos valores da media dos valores //
  soma = 0;
  for (int i = 0; i < n; i++) {
    soma = soma + vet[i];
  }

  printf("Soma = %.2lf\n", soma);

  media = soma / n;

  printf("Media = %.2lf\n", media);

  return 0;
}