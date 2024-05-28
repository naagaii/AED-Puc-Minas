#include <stdio.h>
#include <stdlib.h>

//Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.

int main(){
   
   float temperatura;
   printf("Digite o valor da temperatura da agua:\n");
   scanf("%f", &temperatura);

   if (temperatura < 0){
    printf("A agua esta no estado solido");
   }

   if (temperatura > 100){
    printf("A agua esta no estado gasoso");
   }

   else {
    printf("A agua esta no estado liquido");
   }

   return 0;

}