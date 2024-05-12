#include <stdio.h>
#include <stdlib.h>

//- Elabore uma função que receba dois valores passados por parâmetro e retorne 
//soma dos números ímpares entre o
//intervalo fechado correspondente aos valores passados. Por exemplo, 
//suponha que os valores passados seja, 3 e 6,
//deverá devolver 8, pois a soma dos números impares 3 e 5 no intervalo é 8.

int somaImpares(int num1, int num2);
int main(){
    int valor1, valor2;
    printf("Digite o primeiro valor:\n");
    scanf("%i", &valor1);
    printf("Digite o segundo valor:\n");
    scanf("%i", &valor2);
    int resultado= somaImpares(valor1, valor2);
    printf("A soma dos numeros impares no intervalo %i a %i = %i.\n", valor1, valor2, resultado);
    return 0;
}

int somaImpares(int num1, int num2){
    int soma=0;
    for(int i=num1; i<=num2; i++){
        if(i %2 !=0){
            soma=soma+i;
        }
    }
    return soma;
}