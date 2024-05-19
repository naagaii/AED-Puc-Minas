#include <stdio.h>
#include <stdlib.h>

//- Dado um vetor de inteiros, encontre o maior e o menor elemento e imprima-os.
int main()
{
    int vetor[] = {2, 5, 8, 7, 4, 1, 2, 9, 3, 6};
    int maior = vetor[0], menor = vetor[0];

    for (int i = 1; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("Maior elemento: %i. Menor elemento: %i\n", maior, menor);
    return 0;
}