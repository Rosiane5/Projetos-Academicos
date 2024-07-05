#include <iostream>
#include <stdio.h>

int main()
{
  int numero;

  printf("Digite o numero deseijado:\n");
  scanf("%d", &numero);


if (numero % 7 == 0)
 {
    printf("O numero %d e divisivel por 7", numero);
 }
else 
 {
   printf("O numero %d nao e divisivel por 7", numero);
 }
 return 0;
}
