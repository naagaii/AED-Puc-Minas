#include <stdio.h>
#include <stdlib.h>

//Ler um vetor de 10 posições. Imprimir quantas notas tem um valor igual ou acima da média.
int main(){
    const int tam=10;
    int vetor[tam];
    int soma =0, nr=0;
    float media;
    for (int i =0; i<tam; i++){
        printf("Digite a %i posicao:\n", i);
        scanf("%i", &vetor[i]);
    
    for(int i=0; i<tam; i++){
        soma=soma+vetor[i];

    }
    media= (float)soma/tam;
    for(int i=0;i<tam; i++){
        if(vetor[i]> media){
            nr++;
        }
    }
    printf("Nota %i: %i\n", i, vetor[i]);
    }
    return 0;
}