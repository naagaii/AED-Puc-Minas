#include <stdio.h>

// Dado um vetor de números inteiros, encontre o subvetor cuja soma dos elementos é a
// maior possível.

int maxSubArraySum(int *vetor, int tamanho)
{
    int max_atual = vetor[0], max_total = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        max_atual = (vetor[i] > max_atual + vetor[i]) ? vetor[i] : max_atual + vetor[i];
        max_total = (max_atual > max_total) ? max_atual : max_total;
        // printf("%i - atual:%i total %i\n",i,max_atual,max_total);
    }
    return max_total;
}
#define tam 8
int main()
{
    int vetor[tam] = {-2, -3, 4, -1, -2, 1, 5, -3};
    printf("Soma máxima do subvetor é %d\n", maxSubArraySum(vetor, tam));
    return 0;
}
