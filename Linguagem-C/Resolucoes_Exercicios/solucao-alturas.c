#include <stdio.h>

// criacao de funcao para limpar a entrada de dados e nao dar erro ao digitar as informacoes das demais pessoas //
void limpar_entrada () {
    char c;
    while ((c= getchar()) != '\n' && c != EOF) {}
}

int main () {
  // declaracao das variaveis a serem utilizadas na resolucao //
  int n, nmenores;
  double soma, media, percentmenores;

  // input da quantidade de pessoas a serem necessarias para resolver a situacao problema dentro dos vetores //
  printf("Quantas pessoas serao digitadas? ");
  scanf("%d", &n);

  // criacao do vetor para alocacao dos nomes //
  char nomes [n][50];

  // criacao do vetor para a alocacao das idades e alturas //
  int idades[n];
  double alturas[n];

  // criacao da estrutura para (for) para percorrer todas as posicoes dos vetores definidas no inicio e alocadas na variavel n //
  for (int i = 0; i < n; i++) {
    printf("Dados da %da pessoa\n", i + 1);
    
    printf("Nome: ");
    limpar_entrada ();
    fgets(nomes[i], 50, stdin);
    
    printf("Idade: ");
    scanf("%d", &idades[i]);
    
    printf("Altura: ");
    scanf("%lf", &alturas[i]);
  }

  // criacao da regra for para o calculo das medias e soma das alturas //
  soma = 0;
  for (int i = 0; i < n; i++) {
    soma = soma + alturas[i];
  }
  media = soma / n;

  // output dos dados coletados e processados ao longo do codigo //
  printf("\nAltura media: %.2lf\n", media);

  // contagem das porcentagem de pessoas com menos de 16 anos //
  nmenores = 0;
  for (int i = 0; i < n; i++) {
    if (idades[i] < 16) {
      nmenores++;
    }
  }
  
  percentmenores = (double) nmenores * 100 / n;
  
  printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentmenores);

  // parte final em que é imprimido os nomes das pessoas com menos de 16 anos //
  for (int i = 0; i < n; i++) {
    if (idades[i] < 16) {
      printf("%s", nomes[i]);
    }
  }
  
  return 0;
}