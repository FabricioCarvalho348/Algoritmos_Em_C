#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int numero1, numero2, numero3, numero4, soma;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &numero1);

    printf("Informe o segundo numero:\n");
    scanf("%d", &numero2);

    printf("Informe o terceiro numero:\n");
    scanf("%d", &numero3);

    printf("Informe o quarto numero:\n");
    scanf("%d", &numero4);

    soma = numero1 + numero2 + numero3 + numero4;

    printf("Resultado da soma: %d.\n", soma);

    system("pause");

    return 0;
}