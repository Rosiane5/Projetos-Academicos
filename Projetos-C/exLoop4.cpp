#include <stdio.h>
 /*Faça um algoritmo em C++ que calcule a soma e
 a média dos números digitados pelo usuário
 até ele digitar o número maior que 130.*/
int main(){

  int num, soma = 0, media = 0, cont = 0;
  do{
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if(num < 130){
        soma += num;
        cont++;
        media = soma / cont;
        printf("A soma dos numeros e %d.\n E a media e %d\n", soma, media);
    }
  }while(num < 130);
   printf("O numero e maior que 130");
   return 0;
}