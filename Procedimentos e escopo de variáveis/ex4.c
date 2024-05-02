#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie um procedimento para:
//- ler uma cadeia de caracteres do teclado;
//- contar e mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres.

void contarDigitos();
int main()
{
    char string[100];
    printf("Digite uma cadeia de caracteres:\n");
    gets(string);
    contarDigitos(string);

    return 0;
}

void contarDigitos(char string[])
{
    int i, qtde=0;
    char digitos[100];
    for (i = 0; i < strlen(string); i++)
    {
       if(string[i] >= '0' && string[i] <= '9'){
        digitos[qtde] = string[i];
        qtde++;
       } 
    }
    digitos[qtde] = '\0';
    printf("Quantidade de digitos: %i. Caracteres: %s\n", qtde, digitos);

}
