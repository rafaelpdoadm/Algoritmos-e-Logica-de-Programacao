#include <stdio.h>

int main ()
{
  // definicao das variaveis a serem utilizadas para resolucao da situacao problema //
  double nota1, nota2, nf;

  // input de dados a serem utilizados //
  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);

  // definicao do calculo para obter a resposta solicitada //
  nf = nota1 + nota2;

  // output do calculo apos coleta e uso dos dados //
  printf("Nota final = %.1lf\n", nf);

  // utilizacao da funcao if para interpretacao do dado obtido no output //
  if (nf < 60.0) {
    printf("Reprovado\n");
  }

  return 0;
}