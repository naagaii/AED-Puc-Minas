#include <stdio.h>
#include <stdlib.h>

//ler dois valores inteiros do teclado e imprimir 1 se o primeiro é par e o segundo é ímpar, e imprimir 0 caso não seja

int main(){

    int valor1, valor2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if (valor1 % 2 ==0 && valor2 % 2 !=0) {
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
    
}