#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    int i, j, resultado;

    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= 10; j++) {
            resultado = j * i;
            printf("%d x %d = %d\n", j, i, resultado);
        }
        printf("\n");
    }

}