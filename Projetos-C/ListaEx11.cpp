#include <iostream>
#include <stdio.h>


int main()
{
 int numero1, numero2, soma;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    
    soma = numero1 + numero2;

    
    printf("O dobro da soma dos numeros e: %.2d \n", 2 * soma);

    return 0;
}