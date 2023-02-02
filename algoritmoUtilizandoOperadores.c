#include <stdio.h>

int main() {
    int A, B, soma, subtr, mult, divisao;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &A);

    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divisao = A / B;

    printf("Resultados: \n");
    printf("Soma: %d.\n", soma);
    printf("Subtraçãoo: %d.\n", subtr);
    printf("Multiplicaçãoo: %d.\n", mult);
    printf("Divisão: %d.\n", divisao);
}