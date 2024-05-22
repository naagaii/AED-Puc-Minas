#include <stdio.h>
#include <stdlib.h>

// Dados dois vetores de inteiros `v1` e `v2`, crie um terceiro vetor `v3` que contenha
//todos os elementos de `v1` seguidos por todos os elementos de `v2`.

// Função para concatenar dois vetores
void concatenaVetores(int *v1, int tam1, int *v2, int tam2, int *v3)
{
    for (int i = 0; i < tam1; i++)
    {
        v3[i] = v1[i];
    }
    for (int i = 0; i < tam2; i++)
    {
        v3[tam1 + i] = v2[i];
    }
}
#define tam1 3
#define tam2 3
int main()
{
    int v1[tam1] = {1, 2, 3};
    int v2[tam2] = {4, 5, 6};
    int v3[tam1 + tam2];
    concatenaVetores(v1, tam1, v2, tam2, v3);
    for (int i = 0; i < tam1 + tam2; i++)
    {
        printf("%d ", v3[i]);
    }
    return 0;
}