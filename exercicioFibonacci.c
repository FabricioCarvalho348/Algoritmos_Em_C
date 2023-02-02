#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    int i, primeiro_termo_anterior, segundo_termo_anterior, atual;

    primeiro_termo_anterior = 1;
    segundo_termo_anterior = 0;

    printf("Série de fibonacci (8 primeiros termos:\n");
    printf("%d ", segundo_termo_anterior);
    printf("%d ", primeiro_termo_anterior);

    for(i = 3; i <= 8; i++) {
        atual = primeiro_termo_anterior + segundo_termo_anterior;
        printf("%d ", atual);
        segundo_termo_anterior = primeiro_termo_anterior;
        primeiro_termo_anterior = atual;

    }

    system("pause");

    return 0;
}