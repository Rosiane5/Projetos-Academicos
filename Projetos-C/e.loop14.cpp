#include <stdio.h>

/*Faça um programa que permita ao usuário digitar vários números inteiros até
digitar um número par e imprima se o dobro da soma destes números digitados é menor que 100, 
maior que 500 ou se está entre este intervalo.*/

int main(){

    int num, soma = 0, dobro = 0;
    do{
 
        printf("Digite o numero:\n");
        scanf("%d", &num);
        
        if(num % 2 != 0 ){
         soma += num;
        }
    }while(num % 2 != 0);
       dobro = num * num;

        if(dobro < 100){
            printf("O dobro e menor que 100 e %d,\n", dobro);
        }

        else if(dobro >= 500){
             printf("O dobro e maior que 500 e %d\n", dobro);
        }

        else if(dobro > 100 && dobro == 500){
           printf("O dobro esta ntre o intervalo de 100 a 500\n", dobro);
        }
    
    printf("fim");
    return 0;

}