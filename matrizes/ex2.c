#include <stdio.h>
#include <stdlib.h>

//- Dada uma matriz 3x3 de inteiros, escreva um programa que imprime todos os elementos
//da matriz.
#define linhas 3
#define colunas 3

void imprimeMatriz(int matriz[linhas][colunas]){
    for(int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[linhas][colunas]= {{1,2,3}, {4,5,6}, {7,8,9}};
    imprimeMatriz(matriz);
    return 0;

}

