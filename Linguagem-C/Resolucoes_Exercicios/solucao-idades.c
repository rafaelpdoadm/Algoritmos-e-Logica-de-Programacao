#include <stdio.h>

// criacao de funcao para limpar a entrada de dados e nao dar erro ao digitar as informacoes da segunda pessoa //
void limpar_entrada () {
    char c;
    while ((c= getchar()) != '\n' && c != EOF) {}
}

int main () 
{
  // definicao das variaveis a serem utilizadas para resolucao do problema //
  int idade1, idade2; 
  char nome1[50], nome2[50];
  double media;

  // input dos dados e direcionamento deles para as variaveis a serem utilizadas //
  printf("Dados da primeira pessoa:\n");
  printf("Nome: ");
  fgets(nome1);
  printf("Idade: ");
  scanf("%d", &idade1);

  printf("Dados da segunda pessoa:\n");
  printf("Nome: ");
  limpar_entrada ();
  fgets(nome2);
  printf("Idade: ");
  scanf("%d", &idade2);
  
  // calculo da media das idades dos usuarios //
  media = (double) (idade1 + idade2) / 2;
  
  // output dos dados solicitados ao usuario //
  printf("A idade media de %s e %s e de %.1lf anos", nome1, nome2, media);

  return 0;
}
