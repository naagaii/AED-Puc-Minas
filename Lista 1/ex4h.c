#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hipotenusa;
    printf("Digite o cateto de um triangulo:\n");
    scanf("%f", &cateto1);
    printf("Digite o segundo cateto de um triangulo:\n");
    scanf ("%f", &cateto2);

    hipotenusa= sqrt(cateto1*cateto1 + cateto2*cateto2);

    printf("A hipotenusa do triangulo eh %.2f\n", hipotenusa);



    return 0;
}
