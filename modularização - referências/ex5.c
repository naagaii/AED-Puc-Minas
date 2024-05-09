#include <stdio.h>
#include <stdlib.h>

//Elabore um procedimento que receba dois valores passados por parâmetro. 
//Esse procedimento em uma variável
//passada por referência, a soma dos números ímpares entre o intervalo fechado 
//correspondente aos valores passados.
//Por exemplo, suponha que os valores passados seja, 3 e 6, deverá devolver 8, 
//pois a soma dos números impares 3 e 5 no
//intervalo é 8.

void somaImpares(int *, int *, int *);
int main(){
    int valor1=3, valor2=6, somaimp=0;
    somaImpares(&somaimp, &valor1, &valor2);
    printf("A soma dos numeros impares no intervalo eh: %i.\n", somaimp);
    return 0;
}

void somaImpares(int *num, int *num1, int *num2){
    int soma=0;
    for(int i=*num1; i<=*num2; i++){
        if(i %2 != 0){
            soma=soma+i;
        }   
    }
    *num=soma;
}
