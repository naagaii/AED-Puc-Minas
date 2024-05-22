#include <stdio.h>

// Implemente um algoritmo de ordenação para ordenar um vetor de inteiros em ordem
// decrescente

void decrescente(int *vetor, int tamanho);
#define tam 10
int main()
{
    int vetor[tam] = {5, 3, 8, 4, 2, 9, 1, 7, 6, 10};
    decrescente(vetor, tam);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}
void decrescente(int *vetor, int tamanho)
{
    int temp;
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] < vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}
