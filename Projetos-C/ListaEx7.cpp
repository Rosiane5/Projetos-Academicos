#include <iostream>
#include <stdio.h>


int main()
{ 
  float valor_produto, desconto,total;

   printf("Valor do produto: ");
   scanf("%f", &valor_produto);

   
   total = valor_produto - (9.05 * valor_produto / 100 );
   printf(" o valor do produto com desconto e : %.2f", total);




}
