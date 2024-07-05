#include <stdio.h>
/*⦁	Faça um algoritmo que leia  11 números e imprima
qual o maior e qual o menor número digitado pelo usuário*/
int main(){
  int num, maior = 0, menor = 0, cont;
  printf("Informe o numero:\n");
  scanf("%d", &num);
  maior = num; 
  menor = num;

 for(cont = 2; cont <= 11; cont++){
    printf("Informe o numero %d:\n", cont);
    scanf("%d", &num);
    if(num > maior){
        maior = num; 
    }

    else if(num < menor){
        menor = num;
    }
  }
  printf("O numero maior e %d:\n", maior);
  printf("O numero menor e %d:\n", menor);
}