#include <iostream>
#include <stdio.h>


int main() {

int num1;
int num2;
int soma;

printf("Digite Um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);

soma = num1 + num2;

 if(soma >  50)
   {
     printf("A soma dos numeros %d + %d  e maior que 50 e igual a: %d", num1, num2, soma) ;
   }
}