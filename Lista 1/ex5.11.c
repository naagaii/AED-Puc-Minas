#include <stdio.h>
#include <stdlib.h>

//ler três valores reais do teclado e imprimir 1 se o primeiro está entre os outros dois, e imprimir 0 caso não seja

int main(){

    float valor1, valor2, valor3;
    printf("Digite tres numeros reais:\n");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);

    if (valor1 > valor2 && valor1 < valor3){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
}
