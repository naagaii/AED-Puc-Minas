#include <stdio.h>
#include <stdlib.h>

//Elabore um procedimento que receba um valor passado por parâmetro. 
//Esse procedimento deverá devolver em uma
//variável passada por referência a soma dos termos da serie de Fibonacci 
//do primeiro termo até o termo passado.
//Exemplo suponha que seja passado o valor 6, então deverá devolver 
//a soma de 1+1+2+3+5+8, ou seja, 20.

void somaFibonacci(int *);
int main(){
    int valor=6;
    somaFibonacci(&valor);
    printf("A soma dos termos da serie Fibonacci eh: %i.\n", valor);
    return 0;
}

void somaFibonacci(int *num){
    int soma=2;
    int a=1, b=1, c=2;
    for(int i=3; i<=*num; i++){
        c=a+b;
        a=b;
        b=c; 
        soma=soma+c;
    }
    *num=soma;
}