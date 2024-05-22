#include <stdio.h>
#include <stdlib.h>

//- Dados dois vetores de inteiros `v1` e `v2`, crie um terceiro vetor `v3` que seja o
//resultado da intercalação dos elementos de `v1` e `v2` (ex.: `v1[0]`, `v2[0]`, `v1[1]`,
//`v2[1]`, ...).

void intercalaVetores(int *v1, int tam1, int *v2, int tam2, int *v3) {
int i = 0, j = 0, k = 0;
while (i < tam1 && j < tam2) {
v3[k++] = v1[i++];
v3[k++] = v2[j++];
}
while (i < tam1) {
v3[k++] = v1[i++];
}
while (j < tam2) {
v3[k++] = v2[j++];
}
}

#define tam1 3
#define tam2 3
int main() {
int v1[tam1] = {1, 3, 5};
int v2[tam2] = {2, 4, 6};
int v3[tam1+tam2];
intercalaVetores(v1, tam1, v2, tam2, v3);
for (int i = 0; i < tam1 + tam2; i++) {
printf("%d ", v3[i]);
}
return 0;
}
