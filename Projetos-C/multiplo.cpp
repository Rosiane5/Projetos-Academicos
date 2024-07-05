#include <iostream>
#include <stdio.h>

int main()
{



 int numero;

    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    
    if (numero % 5 == 0) {
        printf("O numero %d e divisivel por 5.\n", numero);
    } else {
        
        int proximoMultiplo = ((numero / 5) + 1) * 5;
        printf("O numero %d nao e divisivel por 5.\n", numero);
        printf("O proximo numero acima que e multiplo de 5 e: %d\n", proximoMultiplo);
    }

    return 0;
}