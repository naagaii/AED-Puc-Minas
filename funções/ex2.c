#include <stdio.h>
#include <stdlib.h>

//Elabore uma função que receba um valor passado por parâmetro e retorne o termo 
//correspondente ao valor passado
//da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, 
//então deverá retorna o 6º termo da série ou seja
//1,1,2,3,5,8, ou seja, deverá atribuir a variável Fib o valor 8. 

int termoFibonacci(int);

int main() {
    int valor;
    printf("Digite um valor:\n");
    scanf("%i", &valor);
    int resultado = termoFibonacci(valor);
    printf("O termo %i da serie Fibonacci eh: %i.\n", valor, resultado);
    return 0;
}

int termoFibonacci(int termo){
    if (termo <= 1)
        return termo;
    int a = 1, b = 1, c;
    for (int i = 3; i <= termo; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}