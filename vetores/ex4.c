#include <stdio.h>
#include <stdlib.h>

//- Calcule e imprima a média dos elementos de um vetor de números reais.

int main(){
    int vetor[]= {1,2,3,4,5,6,7,8,9,10};
    int soma=0;
    float media=0.0;
    for(int i=0; i<10; i++){
        soma= soma + vetor[i];
    }
    media=soma/10;
    printf("Media dos elementos: %.2f.\n",media);
    return 0;
}