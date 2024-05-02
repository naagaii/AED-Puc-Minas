#include <stdio.h>
#include <stdlib.h>

// Crie um procedimento para:
//- ler dois valores reais, o primeiro menor que o segundo, caso não seja
// emita uma mensagem de erro e peça novamente, para
// definirem um intervalo; ( esses valores deverão ser globais)
//- Crie outro procedimento para:
//- ler a quantidade de valores reais a serem testados, e ler outros tantos
// valores quantos os indicados por essa quantidade;
//- contar e mostrar todos os valores lidos, pertencentes ao do intervalo,
// cujas partes inteiras forem números ímpares.
// DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int),
// antes de testar se é impar

float limiteInf = 0, limiteSup = 0;
void leValores();
void valoresTeste(float limiteInf, float limiteSup);
int main()
{
    leValores();
    valoresTeste(limiteInf, limiteSup);
    return 0;
}

void leValores()
{
     do {
        printf("Digite o primeiro valor real (menor):\n");
        scanf("%f", &limiteInf);
        printf("Digite o segundo valor real (maior):\n");
        scanf("%f", &limiteSup);
        if (limiteInf > limiteSup) {
            printf("O primeiro valor precisa ser menor que o segundo. Tente novamente.\n");
        }
    } while (limiteInf > limiteSup);
}

void valoresTeste(float limiteInf, float limiteSup)
{
    int qtde, i;
    printf("Digite a quantidade de valores a serem testados:\n");
    scanf("%i", &qtde);

    float numero;
    for (i = 0; i < qtde; i++)
    {
        printf("Digite o valor %d:\n", i + 1);
        scanf("%f", &numero);

        int parteInteira = (int)numero;
        if (parteInteira % 2 != 0 && parteInteira >= limiteInf && parteInteira <= limiteSup)
        {
            printf("O valor %.2f tem parte inteira impar e esta dentro do intervalo.\n", numero);
        }
        else{
            printf("O valor nao possui parte inteira impar e/ou nao esta dentro do intervalo.\n");
        }
    }
}