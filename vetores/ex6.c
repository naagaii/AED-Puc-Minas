#include <stdio.h>
#define tam 10

// Dado um vetor de inteiros e um número inteiro, verifique se o número está presente no
//vetor e imprima a posição do número no vetor ou uma mensagem indicando que o
//número não foi encontrado.

int main(){
    int vetor[tam]= {1,2,3,4,5,6,7,8,9,10};
    int numero =7;
    int encontrado =0;
    for(int i=0; i<tam; i++){
        if(vetor[i]==numero){
            printf("Numero %i encontrado na posicao %i.\n", numero, vetor[i]);
            encontrado=1;
            break;
        }  
    }
    if(!encontrado){
            printf("Numero %i nao encontrado em nenhuma das posicoes.\n", numero);
        }
    return 0;
}
