#include <stdio.h>

int main ()
{
    // definicao das variaveis a serem utilizadas //
    int n1, n2;

    // input dos dados para a resolucao do problema //
    printf("Digite dois numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    // criacao das regras para a funcao enquanto (dentro dela foi utilizado if) para alcancar o resultado esperado //
    while (n1 != n2) {
        if (n1 < n2) {
            printf("Crescente\n");
        }
        else {
            printf("Decrescente\n");
        }
        printf("Digite outros dois numeros:\n");
        scanf("%d", &n1);
        scanf("%d", &n2);
    }
    
    return 0;
}