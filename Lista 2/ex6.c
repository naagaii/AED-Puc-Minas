#include <stdio.h>
#include <stdlib.h>

//Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é divisível por Y e por Z.

int main(){

    int x, y, z;
    printf("Digite tres numeros inteiros:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if ((x % y ==0) && (x % z ==0)){
        printf("O numero %d eh divisivel por %d e %d", x, y, z);  
    }

    if((x % y ==0) && (x % z !=0)){
        printf("O numero %d eh divisivel por %d, mas nao eh divisivel por %d", x, y, z);
    }

    if((x % z ==0) && (z % y != 0)){
        printf("O numero %d eh divisivel por %d, mas nao eh divisivel por %d", x, z, y);
    }

    if((x % y != 0) && (x % z != 0)){
        printf("O numero %d nao eh divisivel por %d nem por %d", x, y, z);
    }

    return 0;
}