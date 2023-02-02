#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int opcao;
    float numero1, numero2, resultado;


    printf("Digite 1 para Somar;\n");
    printf("Digite 2 para Subtrair;\n");
    printf("Digite 3 para Multiplicar;\n");
    printf("Digite 4 para Dividir;\n");
    scanf("%d", &opcao);

    printf("Insira o primeiro numero:\n");
    scanf("%f", &numero1);
    
    printf("Insira o segundo numero:\n");
    scanf("%f", &numero2);

    if(opcao == 1) {
        resultado = numero1 + numero2;
        printf("Soma: %f.\n", resultado);
    }
    
    if(opcao == 2) {
        resultado = numero1 - numero2;
        printf("Subtracao: %f.\n", resultado);
    }
    
    if(opcao == 3) {
        resultado = numero1 * numero2;
        printf("Multiplicacao: %f.\n", resultado);
    }
    
    if(opcao == 4) {
        resultado = numero1 / numero2;
        printf("Divisao: %f.\n", resultado);
    }

    system("pause");

    return 0;
}