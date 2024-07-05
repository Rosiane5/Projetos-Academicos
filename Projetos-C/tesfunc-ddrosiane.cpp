#include <stdio.h>

int cubo(int  num){


    int result;
   result = num * num * num;
   return result;
   }

int main(){
    int numero, resultado;
    for (int i; i<7; i++)
    {
     printf("Digite um numero?");
     scanf("%d", &numero);
     resultado = cubo(numero);
    }
    printf("O valor do cubo de %d e = %d", numero, resultado);
}