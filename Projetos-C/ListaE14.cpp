#include <iostream>
#include <stdio.h>


int main() 
{
    int n1, quad;

    printf("Digite o numero: ");
    scanf("%d", &n1);

    quad = n1 * n1 * n1 * n1 ;
    printf("O resulato do numero %d ao quadrado e: %d", n1, quad);
    return 0;
}