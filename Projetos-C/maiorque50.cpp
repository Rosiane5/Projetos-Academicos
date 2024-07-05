#include <stdio.h>

int main()
{
 int numero=0;
 
 
 printf("Digite um numero :\n");
 scanf("%d", &numero);
 while(numero > 50) // teste no inicio
 {
   printf("Digite um numero :\n");
   scanf("%d", &numero);
   printf("O numero digitado e valido", numero);
 }
 printf("NUMERO INVALIDO");
 return 0;
}