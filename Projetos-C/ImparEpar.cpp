#include <stdio.h>


int main() 
{
    int num1, num2;

   
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

   
    if (num1 % 2 == 0 && num2 % 2 == 0) 
    {
        printf("Ambos os numeros sao pares.\n");
    } else if (num1 % 2 != 0 && num2 % 2 != 0) {
        printf("Ambos os numeros sao impares.\n");
    } else {
        printf("Um numero e par e o outro e impar.\n");
        if (num1 % 2 == 0) {
            printf("%d e par e %d e impar.\n", num1, num2);
        } else {
            printf("%d e impar e %d e par.\n", num1, num2);
        }
    }

    return 0;
}