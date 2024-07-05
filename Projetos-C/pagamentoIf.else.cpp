#include <iostream>
#include <stdio.h>

int main()

{
  int pag, produto;
  
  float valor, pres;

  printf("Informe o valor do produto: ");
  scanf("%d", &produto);

  printf("Qual a forma de pagamento:\n");
  printf("(1) A vista:\n");
  printf("(2) Duas prestacoes:\n");
  printf("(3) Tres prestacoes:\n");
  printf("(4) Quatro prestacoes:\n");
  scanf("%d", &pag);

if (pag == 1)
 {
   valor = produto - (1.45 / 100 * produto);
   pres = 0;
  }
else if (pag == 2 )
 {
    valor = produto + (0.15 * produto);
    pres = valor / 2;
  }
else if (pag == 3)
 {
    valor = produto + (0.0106 * produto);
    pres = valor / 3;
  }
else if (pag == 4)
 {
   valor = produto + (0.0151 * produto);
   pres = valor / 4;
  }
else 
  {
    printf("valor ivalido");
  }

 printf("O valor total a ser pago: %.2f\n", valor);
 printf("O valor das parcelas: %.2f", pres);

}