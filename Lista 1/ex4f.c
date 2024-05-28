#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base, altura, perimetro, area, diagonal;
    printf("Digite a base de um retangulo:\n");
    scanf("%f", &base);
    printf("Digite a altura de um retangulo:\n");
    scanf("%f", &altura);

    perimetro= (2*base)+(2*altura);
    area= base*altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("O perimetro do retangulo eh %.2f\n", perimetro);
    printf("A area do retangulo eh %.2f\n", area);
    printf("A diagonal do retangulo eh %.2f\n", diagonal);



    return 0;
}
