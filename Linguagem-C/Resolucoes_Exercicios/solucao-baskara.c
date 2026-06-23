#include <stdio.h>
#include <math.h>

int main () 
{
  // definicao das variaveis para resolucao da situacao problema //
  double a, b, c, delta, x1, x2;

  // input dos dados para calculo e resolucao //
  printf("Coeficiente A: ");
  scanf("%lf", &a);

  printf("Coeficiente B: ");
  scanf("%lf", &b);

  printf("Coeficiente C: ");
  scanf("%lf", &c);

  // definicao de formulas e calculos para resolucao da situacao problema //
  delta = b * b - 4 * a * c;

  // criacao da regra if para atender a possibilidade do delta ser negativo e o coeficiente "a" ser zero //
  if (a == 0 || delta < 0) {
    printf("Esta equacao nao possui raizes reais\n");
  }
  // realizacao dos calculos de x1 e x2 para obter o resultado da situacao problema //
  else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    // output dos calculos realizados acima //
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf\n", x2);
  }
  return 0;
}