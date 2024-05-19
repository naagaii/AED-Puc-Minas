#include <stdio.h>
#include <stdlib.h>

//- Declare uma matriz 3x3 de inteiros e inicialize-a com valores de 1 a 9
int linhas =3, colunas =3;
void inicializaMatriz(int matriz[linhas][colunas]){
    int valor = 1;
    for(int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            matriz [i][j] = valor ++;
        }
    }
}

void imprimeMatriz(int matriz[linhas][colunas]){
    for (int i=0; i<linhas; i++){
        for(int j =0; j<colunas; j++){
            printf("%3i", matriz [i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz [linhas][colunas];
    inicializaMatriz(matriz);
    imprimeMatriz(matriz);
    return 0;
}