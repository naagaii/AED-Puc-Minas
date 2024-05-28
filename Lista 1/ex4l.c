#include <stdio.h>
#include <stdlib.h>

//Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.

int main() {

    float razao, termo_1, termo_5;
    printf("Digite a razao de uma PG:\n");
    scanf("%f", &razao);
    printf("Digite o primeiro termo da PG:\n");
    scanf("%f", &termo_1);

    termo_5= termo_1 * pow(razao, 5-1);
    printf("O quinto termo da PG eh %.2f", termo_5);

    return 0;
}