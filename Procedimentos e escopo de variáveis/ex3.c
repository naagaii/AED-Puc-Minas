#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie um procedimento para:
//- ler uma cadeia de caracteres do teclado;
//- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.

void contarLetras();
int main()
{
    char string[100];
    printf("Digite uma cadeia de caracteres:\n");
    gets(string);
    contarLetras(string);
    return 0;
}

void contarLetras(char string[100])
{
    int i, letras = 0, maiusculas = 0, minusculas = 0;
    for (i = 0; i < strlen(string); i++)
    {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
        {
            letras++;
        }
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            maiusculas++;
        }
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            minusculas++;
        }
    }

    printf("Quantidade de letras: %i\n", letras);
    printf("Quantidade de letras maiusculas: %i\n", maiusculas);
    printf("Quantidade de letras minusculas: %i\n", minusculas);
}