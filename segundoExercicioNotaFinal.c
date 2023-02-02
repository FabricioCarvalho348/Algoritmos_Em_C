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

int main(int argc, char *argv[]) {

    float notaDoTrabalho, notaDaAvaliacao, notaDoExame, media;

    printf("Insira a nota do trabalho:\n");
    scanf("%f", &notaDoTrabalho);

    printf("Insira a nota da avaliação:\n");
    scanf("%f", &notaDaAvaliacao);

    printf("Insira a nota do exame:\n");
    scanf("%f", &notaDoExame);
    
    media = (notaDoTrabalho * 2 + notaDaAvaliacao * 3 + notaDoExame * 5) / 10;

    printf("Média: %.2f.\n", media);

    if(media >= 0.0 && media <= 10) {
        if(media >= 8.0) {
            printf("Conceito A.\n");
        } else {
            if(media >= 7.0) {
                printf("Conceito B.\n");
            } else {
                if(media >= 6.0) {
                    printf("Conceito C.\n");
                } else {
                    if(media >= 5.0) {
                        printf("Conceito D.\n");
                    } else {
                        printf("Conceito E.\n");
                    }
                }
            }
        }
    }

    system("pause");

    return 0;
}