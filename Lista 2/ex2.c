#include <stdio.h>
#include <stdlib.h>

//Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da média do aluno,
//uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso
//contrário.

int main (){

    char nome [15];
    float nota1, nota2, nota3, media;
    printf("Digite o seu nome:\n");
    scanf( "%s", &nome);
    printf("Digite os valores de 3 notas:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media= (nota1 + nota2 + nota3) / 3;
    printf("%s, a sua media de notas eh %.2f: ", nome , media);

     if (media >= 6){
        printf("Aprovado!");
    }
    
    else{
        printf("Reprovado.");
    }

    return 0;

}
