// Dados dois vetores de inteiros `v1` e `v2`, crie um terceiro vetor que contenha todos os
//elementos de `v1` que não estão presentes em `v2`.

#include <stdio.h>
#include <stdlib.h>
void diferencaVetores(int *v1, int tam1, int *v2, int tam2, int *v3, int *tam3) {
*tam3 = 0;
for (int i = 0; i < tam1; i++) {
int j;
for (j = 0; j < tam2; j++)
if (v1[i] == v2[j])
break;
if (j == tam2)
v3[(*tam3)++] = v1[i];
}
}
#define tam1 5
#define tam2 3
int main() {
int v1[tam1] = {1, 2, 3, 4, 5};
int v2[tam2] = {2, 4, 6};
int v3[tam1+tam2]; // Alocando o tamanho máximo possível
int tam3;
diferencaVetores(v1, tam1, v2, tam2, v3, &tam3);
for (int i = 0; i < tam3; i++) {
printf("%d ", v3[i]);
}
return 0;
}

