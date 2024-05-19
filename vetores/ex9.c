#include <stdio.h>

// Dados dois vetores de inteiros, crie um terceiro vetor que é a fusão dos dois vetores,
// mantendo a ordem dos elementos.

int main()
{
    int vetor[] = {1, 3, 5, 7, 9};
    int vetor2[] = {2, 4, 6, 8, 10};
    int vetor3[10];
    for (int i = 0; i < 5; i++)
    {
        vetor3[i * 2] = vetor[i];
        vetor3[i * 2 + 1] = vetor2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor3[i]);
    }
    return 0;
}