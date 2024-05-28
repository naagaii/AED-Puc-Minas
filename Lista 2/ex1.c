#include <stdio.h>
#include <stdlib.h>

//Fazer um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número e par ou ímpar.

int main(){

    int valor;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &valor);

    if (valor % 2 ==0){
        printf("numero par");
    }

    if (valor % 2 !=0){
        printf("numero impar");
    }

    return 0;
}
