#include <stdio.h>
#include <string.h>

void limpar_entrada () {
    char c;
    while ((c= getchar()) != '\n' && c != EOF) {}
}

void ler_texto (char *buffer, int lenght) {
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main () {
    int idade;
    double salario;
    char sexo;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);

    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);

    printf("Digite o sexo da pessoa: ");
    limpar_entrada();
    scanf("%c", &sexo);

    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    ler_texto(nome, 50);   

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("GENERO = %c\n", sexo);
    printf("NOME = %s\n", nome);

    return 0;
}