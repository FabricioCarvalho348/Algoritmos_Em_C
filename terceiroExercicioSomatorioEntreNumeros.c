#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    int soma, i;
    soma = 0;
    i = 0;

    do {
        soma = soma + i;
        i++;
    } while(i <= 10);

    printf("Soma: %d.\n", soma);

    system("pause");


    return 0;
}