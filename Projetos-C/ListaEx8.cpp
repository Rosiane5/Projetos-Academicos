#include <iostream>
#include <stdio.h>


int main()
{
float prod, lucro, valor_venda;

 printf("Qual o valor do produto: ");
 scanf("%f", &prod);
 printf("Margem de lucro que deseija obter? ");
 scanf("%f", &lucro);

 valor_venda = (lucro / 100 * prod) + prod;
  printf("O produto de ve ser vendido pelo valo %.2f", valor_venda);
  return 0;

}