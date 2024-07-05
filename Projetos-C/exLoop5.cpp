#include <stdio.h>
 /*Faça um algoritmo em C++ que calcule a soma e 
  a média dos números digitados pelo usuário até 
  ele digitar o número que menor que 13 ou maior que 49.*/
int main(){
    int num, soma = 0, media = 0, cont = 0;
    
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while((num < 13)||(num > 49)){
        soma += num;
        cont++;
        media = soma / cont;
        printf("Resultado da soma e: %d.\n", soma);
        printf("Resultado da media e: %d.\n", media);
        printf("Digite um numero:\n");
        scanf("%d", &num);
        
    }
    printf("O numero digitado e INVALIDO");
    return 0;
}
