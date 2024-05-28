#include <stdio.h>

 int main() {

    int c,f;
    float temperature;
    printf("Digite uma temperatura em graus Celsius:\n");
    scanf("%d", &c);
    f=(9*c/5)+32;
    printf("A temperatura em graus Fahrenheit eh %d",f);
    return 0;


}
