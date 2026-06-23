#include <stdio.h>
#include <math.h>

int main ()
{
  // definicao das variaveis a serem utilizadas na situacao problema //
  double br, ar, area, peri, diag;

  // input dos dados a serem utilizados na resolucao //
  printf("Digite a base do retangulo: ");
  scanf("%lf", &br);

  printf("Digite a altura do retangulo: ");
  scanf("%lf", &ar);

  // definicao dos calculos a serem realizados para obter-se as respostas //
  area = br * ar;
  peri = 2 * (br + ar);
  diag = sqrt(pow(br, 2.0) + pow(ar, 2.0));

  // output dos dados obtidos apos os calculos //
  printf("Area = %.4lf\n", area);
  printf("Perimetro = %.4lf\n", peri);
  printf("Diagonal = %.4lf\n", diag);

  return 0;
}