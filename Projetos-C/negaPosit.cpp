#include <iostream>
#include <stdio.h>

int main() 
{
 int nu1, nu2, soma;

 printf("Digite um numero:\n");
 scanf("%d", &nu1);
 printf("Digite um numero:\n");
 scanf("%d", &nu2);

 soma = nu1 + nu2;

 if (soma % 2 == 0 && soma > 0)
 {
    printf("O numero  %d e um numero positivo e par", soma);
 }
else if (soma % 2 != 0 && soma > 0)
 {
   printf("O numero %d e um numero positivo e impar", soma);
 }

else if (soma < 0 )
 {
    printf("O numero %d e negativo:", soma);
 }

 return 0;
}