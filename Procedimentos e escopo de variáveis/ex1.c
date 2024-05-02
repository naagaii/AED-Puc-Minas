#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void teste(char palavra[], char letrasMaiusculas[]);
void letrasMaiusculas();

int main()
{
    letrasMaiusculas();
    return 0;
}

void letrasMaiusculas()
{
    char palavra[15];
    char letrasMaiusculas[15];
    printf("Digite uma palavra:\n");
    gets(palavra);
    teste(palavra, letrasMaiusculas);
    printf("Letras maiusculas presentes na palavra: %s\n", letrasMaiusculas);
}

void teste(char palavra[], char letrasMaiusculas[])
{
    int i, j = 0;
    for (i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            letrasMaiusculas[j++] = palavra[i];
        }
    }
    letrasMaiusculas[j] = '\0';
    if (j == 0)
    {
        printf("Nao ha letras maiusculas na palavra.\n");
    }
}