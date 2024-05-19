#include <stdio.h>
#include <stdlib.h>

//- Dado um vetor de inteiros, escreva um programa que soma todos os elementos do vetor
//e imprime o resultado.
int main(){
    int vetor[]= {1,2,3,4,5,6,7,8,9,10};
    int soma=0;
    for(int i=0; i<10; i++){
        soma += vetor[i];
    }
    printf("Soma dos elementos do vetor= %i.\n", soma);
    return 0;
}