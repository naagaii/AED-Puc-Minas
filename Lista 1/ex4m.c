#include <stdio.h>
#include <stdlib.h>

//Ler o numerador e o denominador de uma fração e transformá-la em um número decimal

int main (){

    float numerador, denominador, n_decimal;
    
    printf("Digite o numerador e o denominador de uma fracao, respectivamente:\n");
    scanf("%f", &numerador);
    scanf("%f", &denominador);

    n_decimal= numerador/denominador;

    printf("O numero decimal da fracao eh %.2f", n_decimal);

    return 0;
}