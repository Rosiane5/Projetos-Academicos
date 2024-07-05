#include <stdio.h>

int main() {
    int num1, num2, soma;

   
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

 
    soma = num1 + num2;

    
    if (soma >= 13 && soma <= 30) {
        printf("A soma dos numeros esta entre 13 e 30.\n");
    } else if (soma < 13) {
        printf("A soma dos numeros e menor que 13.\n");
    } else if (soma > 20) {
        printf("A soma dos numeros e maior que 20.\n");
    }

    return 0;
}