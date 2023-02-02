/*
Nota                            Peso
Trabalho de Laboratório         2
Avaliação Semestral             3
Exame Final                     5

Media ponderada                 Conceito
8.0 - 10.0                      A
7.0 - 8.0                       B
6.0 - 7.0                       C    
5.0 - 6.0                       D
0.0 - 5.0                       E
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");


    float notaDoTrabalho, notaDaAvaliacao, notaDoExame, media;

    printf("Insira a nota do trabalho:\n");
    scanf("%f", &notaDoTrabalho);

    printf("Insira a nota da avaliação:\n");
    scanf("%f", &notaDaAvaliacao);

    printf("Insira a nota do exame:\n");
    scanf("%f", &notaDoExame);
    
    media = (notaDoTrabalho * 2 + notaDaAvaliacao * 3 + notaDoExame * 5) / 10;

    printf("Média: %.2f.\n", media);

    if(media >= 8.0 && media <= 10) {
        printf("Conceito A.\n");
    }

    if(media >= 7.0 && media < 8.0) {
        printf("Conceito B.\n");
    }

    if(media >= 6.0 && media < 7.0) {
        printf("Conceito C.\n");
    }

    if(media >= 5.0 && media < 6.0) {
        printf("Conceito D.\n");
    }

    if(media >= 0.0 && media < 5.0) {
        printf("Conceito E.\n");
    }

    system("pause");

    return 0;
}