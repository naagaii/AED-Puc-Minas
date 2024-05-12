#include <stdio.h>
#include <stdlib.h>

//Elabore uma função que receba um valor passado por parâmetro e retorne a soma dos termos da 
//serie de Fibonacci
//do primeiro termo até o termo passado. Exemplo suponha que seja passado o valor 6, 
//então deverá devolver a soma de
//1+1+2+3+5+8, ou seja, 20.

int somaFibonacci(int somaTermo);
int main(){
    int valor;
    printf("Digite um valor:\n");
    scanf("%i", &valor);
    int resultado = somaFibonacci(valor);
    printf("A soma dos %i termos da serie Fibonacci eh: %i.\n", valor, resultado);
    return 0;
}

int somaFibonacci(int somaTermo){
    int soma=3;
    int a=1, b=1, c;
    for(int i=3; i<=somaTermo; i++){
        c=a+b;
        soma=soma+c;
        a=b;
        b=c;
    }
    return soma;
}