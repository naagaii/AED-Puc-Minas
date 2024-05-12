#include <stdio.h>
#include <stdlib.h>

//– Elabore uma função que receba dois valores passados por parâmetro e retorne a 
//quantidade de números ímpares
//entre o intervalo fechado correspondente aos valores passados. 
//Por exemplo, suponha que os valores passados seja, 3 e
//6, deverá devolver 2, pois existem os números impares 3 e 5 no intervalo.

int quantImpares(int num1, int num2);
int main(){
    int valor1, valor2;
    printf("Digite o primeiro valor:\n");
    scanf("%i", &valor1);
    printf("Digite o segundo valor:\n");
    scanf("%i", &valor2);
    int resultado= quantImpares(valor1, valor2);
    printf("Quantidade de numeros impares no intervalo %i a %i: %i.\n", valor1, valor2, resultado);
    return 0;
}

int quantImpares(int num1, int num2){
    int impares=0;
    for(int i=num1; i<=num2; i++){
        if(i %2 !=0){
            impares++;
        }
    }
    return impares;
}