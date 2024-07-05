#include <iostream>
#include <stdio.h>


int main()
{
    float cliente, mens, total;

    printf("Qual a quantidade de cliente: ");
    scanf("%f", &cliente);
    printf("valor da mensalida: ");
    scanf("%f", &mens);

    total = cliente * mens;
    printf("O valor da Receita mensal e: %.3f", total);
}