#include <iostream>
#include <stdio.h>


int main()
{
float apli, valor, saldo;

printf("Valor que deseija aplicar: ");
scanf("%f", &apli);

valor = (2.0 / 100 ) * apli;
saldo = valor + apli;
printf("O valor da sua aplicacao com o reajuste  e: %.2f ", saldo);

return 0;


}