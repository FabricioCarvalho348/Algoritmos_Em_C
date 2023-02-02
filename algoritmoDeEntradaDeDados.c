#include <stdio.h>

int main() {
    int idade = 0;
    int ano = 2004;

    printf("Digite uma idade: \n");
    printf("Digite ano que nasceu: \n");

    scanf("%d %d", &idade);
    scanf("%d", &ano);

    printf("Idade informada: %d. \n", idade);
    printf("Ano informado: %d. \n", ano);
}