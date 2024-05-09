#include <stdio.h>
#include <stdlib.h>

// Elabore um procedimento para calcular o Fatorial de um número passado 
//por parâmetro. A resposta deverá ser
//retornada em uma variável passada por referência.
//Faça também um programa principal que chame esse procedimento

void fatNumero(int *);
int main(){
    int numero =5;
    fatNumero(&numero);
    printf("Fatorial do numero: %i.\n", numero);
    return 0;
}

void fatNumero(int *num){
    int fat=1;
    for(int i=1; i<=*num; i++){
        fat=fat*i;
    }
    *num=fat;
}