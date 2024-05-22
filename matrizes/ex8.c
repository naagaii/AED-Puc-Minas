//- Dada uma matriz quadrada NxN, verifique se ela é uma matriz identidade.

#include <stdio.h>
#define ordem 4
int ehIdentidade(int matriz[ordem][ordem]) {
for (int i = 0; i < ordem; i++) {
for (int j = 0; j < ordem; j++) {
if ((i == j && matriz[i][j] ==0) || (i != j && matriz[i][j] == 1)) {
return 0; // Não é identidade
}
}
}
return 1; // É identidade
}
int main() {
int matriz[ordem][ordem] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
if (ehIdentidade(matriz)) {
printf("A matriz identidade.\n");
} else {
printf("A matriz nao identidade.\n");
}
return 0;
}
