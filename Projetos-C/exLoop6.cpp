#include <stdio.h>
/*Faça um algoritmo em C++ que calcule a média de 35 números 
digitados pelo usuário*/
int main(){
    printf("SOMA DE 35 NUMEROS!!\n");
    int num, soma = 0, media = 0, cont= 0;
    for(cont = 0; cont < 35; cont++){
        printf("Digite o %d numero:\n", cont + 1);
        scanf("%d", &num);
        soma += num;
    } 
    printf("A soma e %d", soma);
    return 0;
}