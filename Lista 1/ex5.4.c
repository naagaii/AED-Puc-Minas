#include <stdio.h>
#include <stdlib.h>

//ler um valor inteiro do teclado e imprimir 1 se é par e menor que 100, ou ímpar e maior que 100, imprima 0 caso contrário.

int main(){

    int valor;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &valor);

    if (valor % 2 ==0 && valor<100 || valor % 2 !=0 && valor>100){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
}