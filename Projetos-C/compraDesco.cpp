#include <iostream>
#include <stdio.h>

int main() 
{
 float compra, desconto, valor, total, soma_prod;
 int prod1, prod2;
 
 
 printf("Qual o valor da compra? ");
 scanf("%f", &compra);

 printf("Qual o valor dos produtros escolhido:");
 scanf("%d %d", &prod1, &prod2);

 soma_prod = prod1 + prod2;
 total = compra + soma_prod;

if (soma_prod >= 150)
 {
   valor = total - (0.045 * total) ;
   desconto = (0.045 * total);
 }
else if (soma_prod > 100.00 && soma_prod < 150.00)
 {
   valor = total - (0.0249 * total) ;
   desconto = (0.0249 * total);
 }
else 
 {
    valor = total;
    desconto = 0.00;
 }

 printf("O valor total da compra e %.2f\n", total);
 printf("o valor do desconto %.2f\n", desconto);
 printf("valor final a ser pago e: %.2f", valor);

 }


