#include <iostream>
#include <stdio.h>

int main() 
{
 int n1, n2, soma;
 printf("Informe dois numeros: ");
 scanf("%d %d", &n1, &n2);
 
 soma = n1 + n2;

 if (soma > 123)
 {
  printf("A soma de %d + %d = %d e maior que 123.", n1, n2, soma);
 }
else
{
  printf("Fim");
}

 return 0;
    
}