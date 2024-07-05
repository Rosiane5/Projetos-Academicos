#include <stdio.h>
 /*Faça um algoritmo em C++ que calcule e 
 imprima a metade do número 
 digitado pelo usuário até ele digitar um número negativo.*/

int main() {
    int num, soma = 0, met = 0;
    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num >= 0){
         soma += num;
         met = soma / 2;
         printf("A soma e %d.\nE a metade %d.\n", soma, met);
         }
    } while (num >= 0);
    printf("O numero informado e NEGATIVO\n");
    return 0;
}