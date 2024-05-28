#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração das funcoes
int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    setlocale(LC_ALL,"portuguese");
    int op;

    printf("Escolha sua opcao:\n");
    printf("1 - Numeros impares e pares\n");
    printf("2 - Maior, menor e media\n");
    printf("3 - Fatorial\n");
    printf("4 - Valor da serie\n");
    printf("5 - Fibonacci\n");
    printf("6 - Valor de S\n");
    printf("7 - Palindromos\n");
    printf("8 - 3025\n");
    printf("9 - Cara ou coroa\n");
    printf("10 - Adivinhar o numero\n");
    printf("0 - Finalizar programa\n");

    scanf("%i",&op);

    switch (op)
    {
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
        case 6:
            ex06();
            break;
        case 7:
            ex07();
            break;
        case 8:
            ex08();
            break;
        case 9:
            ex09();
            break;
        case 10:
            ex10();
            break;
        case 0:
            printf("Finalizando o programa\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

// Implementacao das funcoes
int ex01()
{
    printf("Exercicio 01\n");
    //Faca um algoritmo que leia um conjunto de numeros (X) e imprima a quantidade de numeros pares
//(QPares) e a quantidade de numeros impares (QImpares) lidos. Admita que o valor 9999 e utilizado como
//sentinela (FLAG) para fim de leitura.
    
    int numero, QPares = 0, QImpares = 0;

    printf("Digite um numero (ou 9999 para parar):\n");
    scanf("%d", &numero);

    while (numero != 9999) {
        if (numero % 2 == 0)
            QPares++;
        else
            QImpares++;
    
    printf("Digite um numero (ou 9999 para parar):\n");
        scanf("%d", &numero);

    }

    printf("Pares = %d, Impares = %d\n", QPares, QImpares);
    


    return 0;
}

int ex02()
{
    printf("Exercicio 02\n");
    //Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
    //menor e a média aritmética desse conjunto de dados. (Flag -1)

    int numero, i = 0, soma = 0, maior = 0, menor = 0;
    
    printf("Digite um numero inteiro positivo (ou -1 para parar):\n");
    scanf("%d", &numero);

    if (numero != -1) {
        maior = numero;
        menor = numero;
    } else {
        printf("Nenhum numero foi inserido.\n");
        return 0;
    }

    while (numero != -1) {
        i++;
        soma += numero;

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }

        printf("Digite um numero inteiro positivo (ou -1 para parar):\n");
        scanf("%d", &numero);
    }

    if (i > 0) {
        float media = (float)soma / i;
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
        printf("A media aritmetica dos numeros eh: %.2f\n", media);
    } else {
        printf("Nenhum numero foi inserido.\n");
    }

    return 0;
}

int ex03()
{
    printf("Exercicio 03\n");

    //Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado

    int numero, i=1, fatorial=1;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    while (i<=numero){
        fatorial=fatorial*i;
        i=i+1;
    }
    printf("O fatorial de %d eh %d\n", numero, fatorial);

    return 0;
}

int ex04()
{
    printf("Exercicio 04\n");

    //
    return 0;
}

int ex05()
{
    printf("Exercicio 05\n");

    //A série de Fibonacci é formada pela sequência:
   //1, 1, 2, 3, 5, 8, 13, 21, 34, ...
  //Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este enésimo termo.
  
    int numero, a = 1, b = 1, c, i = 2;
    printf("Digite um numero inteiro maior que 2:\n");
    scanf("%d", &numero);
    printf("%d, %d", a, b);

    if (numero <= 2) { 
        printf("O numero deve ser maior que 2.\n");
        return 0;
    }

    while (i < numero){
        c= a + b;
        printf(", %d", c);
        a= b;
        b= c;
        i= i + 1;
    }

    return 0;
}

int ex06()
{
    printf("Exercicio 06\n");


    return 0;
}

int ex07()
{
    printf("Exercicio 07\n");

    //Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita
   //tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números
  //palíndromos de 10000 a 99999

    int numero;
    printf("Digite um numero inteiro maior que 10.000:\n");
    scanf("%d", &numero);

    if (numero<10000){
        printf("O numero precisa ser maior que 10.000.\n");
        return 0;
    }

    while (numero>10000){


    }

    return 0;
}

int ex08()
{
    printf("Exercicio 08\n");
    return 0;
}

int ex09()
{
    printf("Exercicio 09\n");
    return 0;
}

int ex10()
{
    printf("Exercicio 10\n");
    return 0;
}