#include <stdio.h>
#include <stdlib.h>

//- Elabore uma função para calcular e retornar o Fatorial de um número passado por parâmetro.
//Faça também um programa principal que chame essa função.

int fatorial(int num);
int main (){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O fatorial de %d eh %d\n", num, fatorial(num));
    return 0;
}

int fatorial(int num){
    int fat = 1;
    for (int i = 1; i <= num; i++){
        fat *= i;
    }
    return fat;
}
