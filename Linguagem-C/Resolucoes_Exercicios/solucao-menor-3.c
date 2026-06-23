#include <stdio.h>

int main() 
{
    // declaracao das variaveis a serem utilizadas nessa situacao problema
    int num1, num2, num3, menor;

    // input solicitando os dados da situacao problema //
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    // criacao da regra para resolucao do problema menor de tres //
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    }
    else if (num2 < num3) {
        menor = num2;
    }
    else {
        menor = num3;
    }

    // output do dado resposta do situacao problema //
    printf("Menor = %d\n", menor);

    return 0;
}