#include <stdio.h>

//- Dado um vetor de inteiros, escreva um programa que imprima apenas uma ocorrência
// de cada elemento. – O vetor já deverá estar ordenado!

int main()
{
    int vetor[] = {1, 2, 2, 3, 4, 4, 5, 5, 5, 6};
    int tamanho = 10;
    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nVetor sem duplicatas: ");
    for (int i = 0; i < tamanho; i++)
    {
        if (i == 0 || vetor[i] != vetor[i - 1])
        {
            printf("%d ", vetor[i]);
        }
    }
    return 0;
}
