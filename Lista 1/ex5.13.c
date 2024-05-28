#include <stdio.h>
#include <stdlib.h>

//ler três valores literais (caracteres) do teclado e imprimir 1 se o primeiro está entre os outros dois , e imprimir 0 caso não esteja

int main(){

    char ch1,ch2,ch3;
    printf("Digite tres valores literais (caracteres):\n");
    scanf( "%c", &ch1);
    getchar();
    scanf( "%c", &ch2);
    getchar();
    scanf( "%c", &ch3);

    if (ch1 > ch2 && ch1 < ch3){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;


}