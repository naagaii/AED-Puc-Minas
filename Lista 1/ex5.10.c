#include <stdio.h>
#include <stdlib.h>

//ler dois valores reais do teclado e imprimir 1 se o primeiro é maior, menor ou igual ao segundo, e imprimir 0 caso não seja.

int main(){

    float valor1, valor2;
    printf("Digite dois numeros reais\n");
    scanf("%f", &valor1);
    scanf("%f", &valor2); 

    if (valor1 >= valor2 || valor1 <= valor2){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
}