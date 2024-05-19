#include <stdio.h>
#define tam 10

// Dado um vetor de inteiros, escreva um programa que conta o número de elementos
// distintos presentes no vetor – já ordenado.

int main(){
    int vetor[tam] = {1, 1, 2, 2, 3, 3, 3, 8, 9, 10};
    int distintos = 1; // Começamos com 1, pois o primeiro elemento é sempre distinto

    for (int i = 1; i < tam; i++) {
        if(vetor[i] != vetor[i-1]) {
            distintos++;
        }
    }

    printf("Quantidade de numeros distintos: %i.\n", distintos);
    return 0;
}