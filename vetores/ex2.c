#include <stdio.h>
#include <stdlib.h>
const int tam = 10;
void leVetor(int vet[tam]);
void impVetor(int vet[tam]);
int main()
{
    int op;
    int vetor[tam];
    void leVetor(vetor);
    void impVetor(vetor);
    printf("Digite 1 para pares e 2 para impares:\n");
    scanf("%i", &op);
    if (op == 1)
    {
        for (int i = 0; i < tam; i++)
        {
            if (vetor[i] % 2 == 0)
            {
                printf("V[%i]: %i\n", i, vetor[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i < tam; i++)
        {
            if (vetor[i] % 2 != 0)
            {
                printf("V[%i]: %i\n", i, vetor[i]);
            }
        }
    }
    return 0;
}

void leVetor(int vet[tam])
{
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o %i elemento:\n", i);
        scanf("%i", &vet[i]);
    }
}

void impVetor(int vet[tam])
{
    printf("V[%i]: %i\n", tam, vet[tam]);
}