// Dadas duas matrizes A (MxN) e B (NxP), calcule o produto das matrizes

#include <stdio.h>
void multiplicaMatrizes(int A[][2], int B[][3], int C[][3], int linhasA, int colunasA, int
colunasB) {
for (int i = 0; i < linhasA; i++) {
for (int j = 0; j < colunasB; j++) {
C[i][j] = 0;
for (int k = 0; k < colunasA; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}
}
int main() {
int A[2][2] = {{1, 2}, {3, 4}};
int B[2][3] = {{2, 3, 4}, {1, 0, 1}};
int C[2][3]; // Resultado da multiplicação de A por B
multiplicaMatrizes(A, B, C, 2, 2, 3);
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ", C[i][j]);
}
printf("\n");
}
return 0;
}
