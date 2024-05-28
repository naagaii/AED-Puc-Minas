#include <stdio.h>


int main()
 {
     int a,b,c,p1,p2,p3,n1,n2,n3,soma;
     float media;
     printf("Digite 3 notas:\n");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     printf("Digite 3 pesos para as respectivas notas:\n");
     scanf("%d",&p1);
     scanf("%d",&p2);
     scanf("%d",&p3);
     n1=a*p1;
     n2=b*p2;
     n3=c*p3;
     soma=n1+n2+n3;
     media=soma/3.0;
     printf("A media ponderada de %d  ,%d e %d eh igual a %5.2f",n1,n2,n3,media);


      }

