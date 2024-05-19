#include <stdio.h>
#include <stdlib.h>

// Dada uma matriz MxN, crie uma nova matriz que seja a transposta da matriz dada.

#define linhas 3
#define colunas 3

void transpoeMatriz(int origem[linhas][colunas], int destino[colunas][linhas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            destino[j][i] = origem[i][j];
        }
    }
}

void imprimeMatriz(int matriz[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf(" %i", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int origem[linhas][colunas] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int destino[colunas][linhas];
    transpoeMatriz(origem, destino);
    printf("Matriz origem:\n");
    imprimeMatriz(origem);
    printf("Matriz destino:\n");
    imprimeMatriz(destino);
    return 0;
}