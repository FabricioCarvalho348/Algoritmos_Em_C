#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    int soma, i;
    soma = 0;

    for(i = i; i <= 10; i++) {
        soma = soma + i;
    }

    printf("Soma: %d.\n", soma);

    system("pause");


    return 0;
}