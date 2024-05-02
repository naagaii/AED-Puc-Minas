#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie um procedimento para:
//- ler uma palavra do teclado;
//- ler um caractere do teclado
//- transforme toda a palavra em maiúscula;
//- contar e mostrar as letras maiúsculas menores que o caractere,
// e quantas letras são maiores que o caractere, e
// quantas são iguais ao caractere lido

void transformarMaiuscula(char palavra[15], char caractere);
void contarCaracteres(char palavra[], char caractere);

int main()
{
    char palavra[15];
    char caractere;
    printf("Digite uma palavra:\n");
    gets(palavra);
    printf("Agora digite um caractere:\n");
    scanf(" %c", &caractere);
    transformarMaiuscula(palavra, caractere);
    contarCaracteres(palavra, caractere);

    return 0;
}

void transformarMaiuscula(char palavra[15], char caractere)
{
    int i;
    for (i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z')
        {
            palavra[i] -= 32;
        }
    }
    printf("A palavra com letras maiusculas: %s\n", palavra);
}

void contarCaracteres(char palavra[], char caractere)
{
    int i, maior = 0, menor = 0, iguais = 0;
    char letrasMenores[100], letrasMaiores[100];
    for (i = 0; i <= strlen(palavra); i++)
    {
        if (palavra[i] < caractere)
        {
            letrasMenores[menor] = palavra[i];
            menor++;
        }
        if (palavra[i] > caractere)
        {
            letrasMaiores[maior] = palavra[i];
            maior++;
        }
        if (palavra[i] == caractere)
        {
            iguais++;
        }
    }

    letrasMenores[menor] = '\0';
    letrasMaiores[maior] = '\0';

    printf("Quantidade de letras maiusculas menores que o caractere'%c': %d, Letras: %s\n", caractere, menor, letrasMenores);
    printf("Quantidade de letras maiores que o caractere '%c': %d, Letras: %s\n", caractere, maior, letrasMaiores);
    printf("Quantidade de letras iguais ao caractere '%c': %d\n", caractere, iguais);
}