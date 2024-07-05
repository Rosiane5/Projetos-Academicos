#include <iostream>
#include <stdio.h>


int main() 
{  
    float salario, agua, luz, total, resto;
     
    printf("Qual o valor da sua renda? \n");
    scanf("%f", &salario);
    printf("Valos da luz : \n");
    scanf("%f", &luz);
    printf("valor da agua: \n");
    scanf("%f", &agua);
     
    total = luz + agua; 
    resto = salario - total;

    printf("O valor total das suas despesas e: %.2f\n", total);
    printf("E o valor restante do salario ja com o desconto e: %.2f", resto);
}