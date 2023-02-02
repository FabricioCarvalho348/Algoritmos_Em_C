#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    float salario, percentual, aumento, novo_salario;

    printf("Insira o salario:\n");
    scanf("%f", &salario);

    printf("Insira o percentual:\n");
    scanf("%f", &percentual);

    aumento = salario * percentual / 100;

    novo_salario = salario + aumento;

    printf("Valor do aumento: %.2f.\n", aumento);
    printf("Valor do novo salario: %.2f.\n", novo_salario);

    system("pause");

    return 0;

}