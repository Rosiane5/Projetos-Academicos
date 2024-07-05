#include <iostream>
#include <stdio.h>


int main()
{ 
    int produto, valor_avs, desconto;

    printf("valor do produto: ");
    scanf("%d", &produto);
    printf("Desconto aplicado: ");
    scanf("%d", &desconto);

    valor_avs = produto - (desconto * produto / 100)  ;
    printf("O valor do protudo e %d \n", produto);
    printf("Com o pagamento avista ele sai a  %d", valor_avs);
}