#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_minimo, valor_kw, kw_gastos, valor_a_pagar, novo_valor;

    printf("Digite o valor do salario minimo atual:\n");
    scanf("%f", &salario_minimo);
    printf("Digite o valor da energia gasta em KW:\n");
    scanf("%f", &kw_gastos);

    valor_kw= salario_minimo /7 / 100;
    valor_a_pagar= kw_gastos*valor_kw;
    novo_valor= valor_a_pagar - (valor_a_pagar * 0.1);

    printf (" O valor de cada Kilowatt: R$%.2f\n", valor_kw);
    printf("O valor a ser pago: R$%.2f\n",valor_a_pagar);
    printf("O valor a ser pago com 10%% de desconto: R$%.2f\n", novo_valor);



    return 0;
}
