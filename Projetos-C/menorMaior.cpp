#include <iostream>
#include <stdio.h>

int main()
{
 int n1, n2;

 printf("Digite um umero:");
 scanf("%d", &n1);
 printf("Digite outro nuemro:");
 scanf("%d", &n2);
 
if (n1 > n2)
 {
    printf("O numero %d e maior que %d", n1, n2);
 }

else if (n2 > n1)
  {
    printf("O numero %d e maior que %d", n2, n1);
  }

else if (n1 == n2)
 {
    printf("Voce digitou 2 numeros iguais!");
 }
return 0;
}