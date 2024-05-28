#include <stdio.h>
#include <stdlib.h>

//- ler um código do teclado e mostrar o nome correspondente, de acordo com a lista :
//221 Bernardo
//211 Eustáquio
//311 Luiz
//312 Mário
//332 Artur

int main(){
   
   int codigo;
   
   while (1) {
   printf("Digite seu codigo de aluno:\n");
   scanf("%d", &codigo);

   if (codigo == 221){
    printf("Bem Vindo Bernardo!\n");
    break;
   }

   else if (codigo == 211){
    printf("Bem Vindo Eustaquio!\n");
    break;
   }

   else if (codigo == 311){
    printf("Bem Vindo Luiz!\n");
    break;
   }

   else if (codigo == 312){
    printf("Bem Vindo Mario!\n");
    break;
   }

   else if(codigo == 332){
    printf("Bem Vindo Artur!\n");
    break;
   }
   
   else {
    printf("Esse codigo nao pertence a nenhum aluno. Tente novamente.\n");
   }
   
   }
   return 0;

}