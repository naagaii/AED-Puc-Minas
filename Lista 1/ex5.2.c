#include <stdio.h>
#include <stdlib.h>

//Ler um valor inteiro do teclado e imprima 1 se for múltiplo de 3 ou 0 se não for

int main(){

    int valor;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &valor);

    if (valor % 3 ==0) {
        printf("1");
    }

    if (valor % 3 !=0) {
        printf("0");
    }

    return 0;
}