#include <stdio.h>
#include <stdlib.h>

//Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de
//uma mensagem de erro.

int main(){

    float x, y;
    
    while (x == 0) {
    printf("Digite um valor de x:\n");
    scanf("%f", &x);

    if (x < 0) {
        y= (x * 2) +4;
        printf("O valor de y eh %.2f", y);
    }

    if (x > 0){
        y= (x * 3) -3;
        printf("O valor de y eh %.2f", y);
    }

    if (x == 0){
        printf("ERRO, insira outro valor!\n");

    }
    }
    return 0;
}