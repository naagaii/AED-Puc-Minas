#include <stdio.h>
#include <stdlib.h>

//- Leia para a variável TAM o tamanho do vetor
//- Declare um vetor de inteiros com TAM elementos.
//- Inicialize o vetor com os números de 1 a 10.
//- Utilize um laço para imprimir todos os elementos do vetor.
int main(){
    int tam;
    printf("Digite o tamanho do vetor:\n");
    scanf("%i", &tam);
    int vetor[tam];
    for(int i =0; i<tam; i++){
        vetor[i]= i+1;
    }
    for(int i=0; i<tam; i++){
        printf("%2i\n", vetor[i]);
    }
    return 0;
}