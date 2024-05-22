//Objetivo:** Implementar um programa em C que soma duas matrizes de mesmas
//dimensões e armazena o resultado em uma terceira matriz.


#include <stdio.h>
#define LINHAS 2
#define COLUNAS 3
void somaMatrizes(int A[LINHAS][COLUNAS], int B[LINHAS][COLUNAS], int
resultado[LINHAS][COLUNAS]) {
for (int i = 0; i < LINHAS; i++) {
for (int j = 0; j < COLUNAS; j++) {
resultado[i][j] = A[i][j] + B[i][j];
}
}
}
int main() {
int A[LINHAS][COLUNAS] = {
{1, 2, 3},
{4, 5, 6}
};
int B[LINHAS][COLUNAS] = {
{6, 5, 4},
{3, 2, 1}
};
int resultado[LINHAS][COLUNAS];
somaMatrizes(A, B, resultado);
printf("Soma das Matrizes:\n");
for (int i = 0; i < LINHAS; i++) {
for (int j = 0; j < COLUNAS; j++) {
printf("%d ", resultado[i][j]);
}
printf("\n");
}
return 0;
}
