#include <stdio.h>
#include <stdlib.h>

//Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia.

int main(){

    int hora, minutos, horas_min, quant_min;
    printf("Digite a hora atual (sem os minutos)\n");
    scanf("%d", &hora);
    printf("Agora digite os minutos:\n");
    scanf("%d", &minutos);

    horas_min= hora*60;
    quant_min= horas_min + minutos;

    printf("A quantidade de minutos que se passou desde o inicio do dia eh %d", quant_min);

    return 0;

}