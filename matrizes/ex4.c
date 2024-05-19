#include <stdio.h>
#include <stdlib.h>

//- Dada uma matriz quadrada de tamanho N, encontre a soma dos elementos de sua
//diagonal principal.

#define n 4

int somaDiagonalPrincipal(int matriz [n][n]){
    int soma=0;
    for (int i=0; i<n; i++){
        soma=soma + matriz[i][i];
    }
    return soma;
}

int main(){
    int matriz[n][n] = {{1,0,0,0}, {0,2,0,0}, {0,0,3,0}, {0,0,0,4}};
    printf("Soma da diagonal principal: %i.\n", somaDiagonalPrincipal(matriz));
}