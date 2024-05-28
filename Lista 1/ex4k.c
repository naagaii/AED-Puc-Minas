#include <stdio.h>
#include <stdlib.h>

// Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo

int main(){
    float razao,termo_1, termo_10;
    printf("Digite a razao de uma PA:\n");
    scanf("%f", &razao);
    printf("Digite o primeiro termo da PA:\n");
    scanf("%f", &termo_1);

    termo_10 = termo_1 + (10-1) * razao;

    printf("O decimo termo da PA eh %.2f", termo_10);
    
    return 0;
}