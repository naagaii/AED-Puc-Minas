#include <stdio.h>
#include <stdlib.h>

//O número 3025 possui a seguinte característica:
//30 + 25 = 55
//552 = 3025
//Fazer um algoritmo que dado um número de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele
//possui ou não esta característica

int main(){
    int numero;
    printf("Digite um numero de quatro digitos:\n");
    scanf("%d", &numero);

    if(numero >= 1000 && numero <= 9999){
        int primeiro = numero / 100;
        int segundo = numero % 100;
        int soma_quadrados = (primeiro + segundo) * (primeiro + segundo);
    if (soma_quadrados == numero){
        printf("%d possui a caracteristica de 3025.\n", numero);
    }

    else {
        printf("%d nao possui a caracteristica de 3025", numero);
    }

   
  }  else {
        printf("O numero nao possui quatro digitos.\n");
    }

    return 0;
}