#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    float raio, perimetro, area;
    printf("Digite o raio de um circulo:");
    scanf("%f", &raio);
    perimetro= 2*PI*raio;
    area= PI*raio*raio;

    printf("O perimetro do circulo eh %.2f\n", perimetro);
    printf("A area do circulo eh %.2f\n", area);



    return 0;
}
