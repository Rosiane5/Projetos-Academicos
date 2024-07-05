#include <iostream>
#include <stdio.h>

int main() 

{
 int n1;
 int n2;
 int soma;

printf("Digite um numero: ");
printf("Digite otro numero: ");
scanf("%d %d", &n1, &n2);
soma = n1 + n2;

if(soma >= 35)
 {
    printf("A soma dos %d e %d e maior que 35", n1, n2);
 }
else
  {
    printf("A soma e menor que 35");
 }

} 