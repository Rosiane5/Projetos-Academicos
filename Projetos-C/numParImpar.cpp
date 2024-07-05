#include <iostream>
#include <stdio.h>

int main()
{
 int nume;

 printf("Digite um numero: ");
 scanf("%d", &nume);

if (nume % 2 == 0)
  {
    printf("O NUMERO E PAR!");
  }
else
 {
    printf("O NUMERO E IMPAR!");
 }
 return 0;
}