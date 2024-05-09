#include <stdio.h>
#include <stdlib.h>

//Elabore um procedimento que receba dois valores passados por parâmetro. 
//Esse procedimento deverá em uma
//variável passada por referência, a quantidade de números ímpares 
//entre o intervalo fechado correspondente aos valores
//passados. Por exemplo, suponha que os valores passados seja, 
//3 e 6, deverá devolver 2, pois existem os números impares
//3 e 5 no intervalo

void numerosImpares(int *, int *, int *);
int main(){
    int valor1= 3, valor2=6, imp=0;
    numerosImpares(&imp, &valor1, &valor2);
    printf("Quantidade de numeros impares no intervalo : %i.\n", imp);
    return 0;
}

void numerosImpares(int *num, int *num1, int *num2){
    int impares=0;
    for(int i=*num1; i<=*num2; i++){
        if(i % 2 != 0){
            impares++;
        }
    }
    *num=impares;

}