#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcLucroDistribuidor(float precoDeFabrica, float percentualDistribuidor) {
    return precoDeFabrica * percentualDistribuidor / 100;

}

float calcImpostos(float precoDeFabrica, float percentualImposto) {
    return precoDeFabrica * percentualImposto / 100; 
}

float calcPrecoFinal(float precoDeFabrica, float valorDistribuidor, float valorImposto) {
    return precoDeFabrica + valorDistribuidor + valorImposto;
}



int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    float precoDeFabrica, percentualDistribuidor, percentualImposto, lucroDistribuidor, imposto, valorFinal;

    printf("Insira o preço de fábrica:\n");
    scanf("%f", &precoDeFabrica);

    printf("Insira o percentual de lucro do distribuidor:\n");
    scanf("%f", &percentualDistribuidor);

    printf("Insira o percentual de imposto:\n");
    scanf("%f", &percentualImposto);

    lucroDistribuidor = calcLucroDistribuidor(precoDeFabrica, percentualDistribuidor);

    imposto = calcImpostos(precoDeFabrica, percentualImposto);

    valorFinal = calcPrecoFinal(lucroDistribuidor, precoDeFabrica, imposto);

    printf("Lucro do distribuidor: R$ %.2f.\n", lucroDistribuidor);
    printf("Impostos: R$ %.2f.\n", imposto);
    printf("Valor final: R$ %.2f.\n", valorFinal);


    return 0;
}    