#include <stdio.h>
#include <stdlib.h>

//ler três valores reais do teclado e imprimir 1 se o primeiro não está entre os outros dois, e imprimir 0 caso não esteja

int main(){

    float valor1, valor2, valor3;
    printf("Digite tres numeros reais:\n");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);

    if (valor1 > valor2 && valor1 < valor3){
        printf("0");
    }

    else {
        printf("1");
    }

    return 0;
}