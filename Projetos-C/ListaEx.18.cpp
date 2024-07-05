#include <iostream>
#include <stdio.h>


int main() 
{
    float garrafas, quant;
    
    printf("Quantas garrafas tem: ");
    scanf("%f", &garrafas);

    quant = garrafas / 24;

    printf("A quantidade de engradados para armazenar todas as garrafas sao de %.0f: ", quant );
    return 0;
   
}