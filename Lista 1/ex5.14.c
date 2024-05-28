#include <stdio.h>
#include <stdlib.h>

//ler três valores literais (caracteres) do teclado e imprimir 1 se estão em ordem crescente lexicograficamente, e imprimir 0 caso não esteja

int main(){

    char ch1, ch2, ch3;
    printf("Digite tres valores literais (caracteres):\n");
    scanf( "%c", &ch1);
    scanf( "%c", &ch2);
    scanf( "%c", &ch3);

    if (ch1 < ch2 < ch3){
        printf("1");
    }

    else{
        printf("0");
    }

    return 0;
}