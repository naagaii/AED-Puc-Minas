#include <stdio.h>
#define tam 10

//- Escreva um programa que inverte a ordem dos elementos de um vetor de inteiros.

int main(){
    int vetor[tam]= {1,2,3,4,5,6,7,8,9,10};
    int temp;
    for (int i=0; i<tam/2; i++){
        temp= vetor[i];
        vetor [i] = vetor[9-i];
        vetor [9-i] = temp;
    }
    for(int i=0; i<10; i++){
        printf("%i\n", vetor[i]);
    }
    return 0;
}