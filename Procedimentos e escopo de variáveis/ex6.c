#include <stdio.h>
#include <stdlib.h>

// Crie um procedimento para:
//- ler dois valores inteiros positivos, limites para definirem um intervalo;
//( esses valores deverão ser globais
//- ler uma quantidade de valores inteiros a serem testados – FLAG -1; um por vez;
//- contar e mostrar dentre esses valores lidos os que forem múltiplos de 2 e de 3,
//  ao mesmo tempo, e pertençam ao intervalo.

int limiteInf=0, limiteSup=0;
void contarIntervalo();
int main()
{
    contarIntervalo();
}

void contarIntervalo()
{
    printf("Digite o primeiro valor:\n");
    scanf("%i", &limiteInf);
    printf("Digite o segundo valor:\n");
    scanf("%i", &limiteSup);
    int valoresTeste;
    
    int m23 = 0, pintervalo = 0;
    while (valoresTeste != -1)
    {   
        printf("Digite um valor (-1 para sair):\n");
        scanf("%i", &valoresTeste);
        if ((valoresTeste % 2 == 0 && valoresTeste % 3 == 0) && (valoresTeste >= limiteInf && valoresTeste <= limiteSup))
        {
            m23++;
        }
        if (valoresTeste >= limiteInf && valoresTeste <= limiteSup)
        {
            pintervalo++;
        }
    }
    printf("Quantidade de valores multiplos de 2 e 3 e pertencentes ao intervalo: %d\n", m23);
    printf("Quantidade de valores pertencentes ao intervalo: %d\n", pintervalo);
}
