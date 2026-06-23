#include <stdio.h>

int main () 
{
    // declaracao das variaveis a serem utilizadas no problema //
    int n, i, produto;

    //input dos dados a serem utilizados na situacao //
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    // criacao da regra que gera o output para a resolucao da situacao problema //
    for (i = 1; i <= 10; i++) {
        produto = n * i;
        printf("%d x %d = %d\n", n, i, produto);
    }

    return 0;
}