#include <stdio.h>
#include <stdlib.h>

//Dada uma matriz 4x4, calcule e imprima a soma de todos os seus elementos.

#define linhas 4
#define colunas 4

void calculaSoma(int matriz[linhas][colunas]){
    int soma=0;
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            soma= soma + matriz[i][j];
        }
    }
    printf("A soma dos elementos na matriz eh: %i.\n", soma);
}

int main(){
    int matriz[linhas][colunas]= {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    calculaSoma(matriz);
    return 0;
}