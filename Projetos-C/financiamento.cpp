#include <stdio.h>
int main() 
{
  float salario, finan;

  printf("Qual o valor do seu salario? ");
  scanf("%f", &salario);
  printf("Qual o valor do financiamento? ");
  scanf("%f", &finan);

  if (finan <= 5 * salario)
    {
     printf("Financiamento Concedido\n");
    }
  else 
    {
      printf("Financiamento Negado\n");
    }
  printf("OBRIAGADO POR NOS CONSULTAR!!");
  
  return 0;
}