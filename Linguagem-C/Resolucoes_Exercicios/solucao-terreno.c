#include <stdio.h>

int main ()
{
  // definicao das variaveis//
  double l, c, vm2, a, pco;

  // entrada e direcionamento de dados das variaveis do codigo //
  printf("Digite a largura do terreno: ");
  scanf("%lf", &l);

  printf("Digite o comprimento do terreno: ");
  scanf("%lf", &c);

  printf("Digite o valor do metro quadrado: ");
  scanf("%lf", &vm2);

  // apos coletados os dados, definicao dos calculos a serem feitos para obter as respostas desejadas //
  a = l * c;
  pco = a * vm2;

  // output dos resultados solicitados //
  printf("Area do terreno = %.2lf\n", a);
  printf("Preco do terreno = %.2lf\n", pco);

  return 0;
}