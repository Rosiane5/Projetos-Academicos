#include <iostream>
#include <stdio.h>

int main()
{
    
    int num1, num2, num3;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

   
     media = (num1 + num2 + num3) / 3.0;

    
    if (media > num1) {
        printf("A media dos numeros e maior que o primeiro numero.\n");
    } else if (media < num1) {
        printf("A media dos numeros e menor que o primeiro numero.\n");
    } else {
        printf("A media dos numeros e igual ao primeiro numero.\n");
    }

    return 0;
}
