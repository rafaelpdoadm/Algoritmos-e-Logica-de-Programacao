#include <stdio.h>

int main ()
{
    // declaracao das variaveis para a resolucao //
    int x, y, soma, troca;

    // input para a coleta dos dados a serem utilizados na resolucao //
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    // criacao da regra if para o caso do x ser maior do que o y //
    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }
    
    soma = 0;
    // criacao da regra for para a resolucao da situacao problema //
    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }
    // output para obtermos o resultado de forma visual //
    printf("Soma dos impares = %d\n", soma);

    return 0;
}