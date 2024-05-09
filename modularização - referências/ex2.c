#include <stdio.h>
#include <stdlib.h>

//Elabore um procedimento que receba um valor passado por parâmetro. 
//Esse procedimento deverá devolver em uma
//variável passada por referência o termo correspondente ao valor passado 
//da serie de Fibonacci. Exemplo suponha que
//seja passado o valor 6, então deverá retorna o 6º termo da série 
//ou seja 1,1,2,3,5,8, ou seja, deverá atribuir a variável Fib
//o valor 8.

void valorFibonacci(int *);
int main(){
    int valor = 6;
    valorFibonacci(&valor);
    printf("O termo na serie Fibonacci eh: %i.\n", valor);
    return 0;
}

void valorFibonacci(int *fibonacci){
    int a=1, b=1, c=2;
    for(int i=3; i<=*fibonacci; i++){
        c=a+b;
        a=b;
        b=c;  
    }
    *fibonacci=c;
}