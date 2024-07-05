
#include <stdio.h>

int main()
{
   int num1, num2, soma;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o sendo numero: ");
  scanf("%d", &num2);

 soma = num1 + num2;
    
 if (soma > 2 * num1) {
        printf("A soma dos numeros e maior que o dobro do primeiro numero.\n");
    } 
else if (soma < 2 * num1) {
        printf("A soma dos numeros e menor que o dobro do primeiro numero.\n");
    } 
else {
        printf("A soma dos numeros e igual ao dobro do primeiro numero.\n");
    }
    return 0;
}
