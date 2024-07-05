#include <iostream>
#include <stdio.h>


int main()
{
    float salario, aluguel, agua, luz, tel, sobra, total;

    printf("Salario : ");
    scanf("%f", &salario);
    printf("qual o valor do aluguel: ");
    scanf("%f", &aluguel);
    printf("Valor da agua:");
    scanf("%f", &agua);
    printf("Valor da luz: ");
    scanf("%f", &luz);
    printf("Valor do telefone");
    scanf("%f", &tel);
  
    
   total = (aluguel + agua) + (luz + tel);
   printf("O valor total das despesas e: %.2f", total);

   sobra = salario - total;
   printf("O valor restante do salario e : %.2f", sobra);
   




}