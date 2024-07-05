#include <iostream>
#include <stdio.h>



 int main()  

{ 

    int numero; 

 

    printf("Digite um numero: "); 

    scanf("%d", &numero); 

 

    if (numero >= 21 && numero <= 30) { 

        printf("O numero esta entre 21 e 30.\n"); 

    } else { 

        printf("O numero nao esta entre 21 e 30.\n"); 

    } 

 

    return 0; 

} 