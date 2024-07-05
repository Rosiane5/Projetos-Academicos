#include <stdio.h>

int main() 
{
 int numero, soma = 0 , cont = 0 ;

 printf("Informe os  numeros que deseja obter a soma!\n");
 
 
 while(cont < 7)
 {
 printf("Informe os  numeros que deseja obter a soma:");
 scanf("%d", &numero);
 soma +=  numero;
 cont++;

 }
 printf("%d", soma);
 return 0;

}