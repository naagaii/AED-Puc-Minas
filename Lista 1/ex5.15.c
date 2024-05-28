#include <stdio.h>
#include <stdlib.h>

//ler um valor literal (caractere) do teclado e imprimir 1 se é uma letra maiúscula, e imprimir 0 caso não seja

int main(){

    char ch;
    printf("Digite um valor literal (caractere):\n");
    scanf( "%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
}