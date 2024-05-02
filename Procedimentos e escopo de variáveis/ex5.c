#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie um procedimento para:
//- ler uma cadeia de caracteres do teclado;
//- contar e mostrar tudo o que não for dígito e também não for letra minúscula.

void contarCaracteres(char string[]);
int main()
{
    char string[100];
    printf("Digite uma cadeia de caracteres:\n");
    gets(string);
    contarCaracteres(string);

    return 0;
}

void contarCaracteres(char string[])
{
    int i, naoEhDigito = 0;
    char naoDigito[100] = ""; 
    for (i = 0; i < strlen(string); i++)
    {
        if (!(string[i] >= '0' && string[i] <= '9') && !(string[i] >= 'a' && string[i] <= 'z'))
        {                                       
            naoDigito[naoEhDigito] = string[i]; 
            naoEhDigito++;
        }
    }
    naoDigito[naoEhDigito] = '\0'; 

    printf("Quantidade de caracteres que nao sao digitos e nao sao letras minusculas: %d. Caracteres: %s\n", naoEhDigito, naoDigito);
}