#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso_racao, quant_racao1,quant_racao2,quant_racao5dias,resto_racao, quant_racao_5dias;
    printf("Digite o peso em kg de um saco de racao:\n");
    scanf("%f", &peso_racao);
    printf("Digite a quantidade de racao em g distribuida ao primeiro gato:\n");
    scanf("%f", &quant_racao1);
    printf("Digite a quantidade de racao em g distribuida ao segundo gato:\n");
    scanf("%f", &quant_racao2);

    quant_racao_5dias= (quant_racao1 + quant_racao2)*5;
    resto_racao= peso_racao*1000 - quant_racao_5dias;


    printf("Ao final de 5 dias, restara %.2f gramas de racao no saco",resto_racao);
    return 0;
}
