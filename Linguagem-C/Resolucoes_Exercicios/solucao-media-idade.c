#include <stdio.h>

int main ()
{
    // declaracao das variaveis a serem utilizadas na resolucao da situacao problema //
    int idade, cont, soma;
    double media;

    // input dos dados a serem utilizados para resolver a situacao problema //
    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    // criacao da regra enquanto para a construcao da resolucao do problema //
    while (idade >= 0) {
        soma = soma + idade;
        cont = cont + 1;

        scanf("%d", &idade);
    }
    // criacao da regra if para caso o numero seja menor do que 0 // 
    if (cont == 0) {
        printf("Impossivel calcular\n");
    }
    // caso maior do que zero fazer o calculo da media
    else {
        media = (double) soma / cont;
        printf("Media = %.2lf\n", media);
    }
    return 0;
}