#include <stdio.h>
#include <stdlib.h>

//ler um valor inteiro do teclado e imprimir 1 se pertence ao intervalo aberto entre (25:75), e imprimir 0 caso não pertença.

int main(){

    int valor; 
    printf("Digite um numero inteiro:\n");
    scanf("%d", &valor);

    if (valor >= 25 && valor <=75){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
}