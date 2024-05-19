#include <stdio.h>
#include <stdlib.h>

//Dada uma matriz quadrada de tamanho N, encontre a soma dos elementos de sua
//diagonal secundária.

#define n 4

int somaDiagonalSecundaria(int matriz[n][n]){
    int soma=0;
    for (int i=0; i<n; i++){
        soma= soma + matriz[i][n -1-i];
    }
    return soma;
}

int main(){
    int matriz[n][n]= {{0, 0, 0, 1}, {0, 0, 2, 0}, {0, 3, 0, 0}, {4, 0, 0, 0}};
    printf("A soma da diagonal secundaria : %i.\n", somaDiagonalSecundaria(matriz));
    return 0;
}
