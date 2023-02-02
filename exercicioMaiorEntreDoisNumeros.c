#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float numero1, numero2;

    printf("Insira o primeiro numero:\n");
    scanf("%f", &numero1);

    printf("Insira o segundo numero:\n");
    scanf("%f",&numero2);
    
    if(numero1 > numero2) {
        printf("Maior: %.1f.\n", numero1);

    } else {
        printf("Maior: %.1f.\n", numero2);
    }

    if(numero1 == numero2) {
        printf("Os numeros sao iguais.\n");
    }
    
    system("pause");
    
    return 0;
}