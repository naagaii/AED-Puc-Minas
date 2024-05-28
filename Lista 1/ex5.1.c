#include <stdio.h>
#include <stdlib.h>

// Ler um valor inteiro do teclado e imprima 0 se for par ou 1 se for impar

int main(){

    int valor;
    printf("Digite um valor inteiro:\n");
    scanf("%d", &valor);

    if (valor % 2 ==0) { 
        printf("0");
    }

    if (valor % 2 !=0) {
      printf("1");
    }

    return 0;
}