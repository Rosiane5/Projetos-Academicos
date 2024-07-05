#include <iostream>
#include <stdio.h>

int main() 
{
  int n1, n2, n3, soma;

  printf("Digite 3 numeros: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  soma = (n1 + n2 + n3) / 3;

  if (soma > 20)
  {
    printf("A media e maior que 20.");
  }

 else 
  {
   printf("A media nao e maior que 20.");
  }
 return 0;
}