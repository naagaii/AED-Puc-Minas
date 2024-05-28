#include <stdio.h>
#include <stdlib.h>

//ler um valor inteiro do teclado e imprimir 1 se pertence aos intervalos fechados [15:45] ou [66:99], e imprimir 0 caso não pertença

int main(){

    int valor;
    printf("Digite um numero inteiro:\n");
    scanf("%d", & valor);

    if (valor >=15 && valor <= 45 || valor>=66 && valor <=99){
        printf("1");
    }

    else {
        printf("0");
    }

    return 0;
}