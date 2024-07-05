#include <stdio.h>
 /*Faça um algoritmo em C++ que calcule e imprima a soma de
 125 números digitados pelo usuário.*/

int main(){  
  int num, soma = 0, cont = 0;
  for(cont = 0; cont < 125; cont++)

   {
      printf("Digite o %d numero:", cont + 1);
      scanf("%d", &num);
      soma += num;
    }
    printf("A soma e %d\n", soma);
}