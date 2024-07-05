#include <stdio.h>
/*⦁	Faça um algoritmo em C++ que calcule o quadrado dos números pares 
digitados pelo usuário até ele digitar um número menor que 1.
OBS: Se o usuário digitar um número impar você deve informa-lo 
que não irá calcular o quadrado deste número pois ele é ímpar.
*/

int main(){
    int num, quad = 0;
    do{
        printf("Digite um numero para calcular quadrado:\n");
        scanf("%d", &num);
        if(num > 1 && num % 2 == 0){
            quad = num * num;
            printf("O quadrado do %d e: %d\n", num, quad); 
            
        }
        else if((num > 1 && num % 2 != 0)){
            printf("O numero IMPAR calculo nao pode ser excultado.\n");
        }
        
    }while(num > 1);
    printf("Voce encerro programa");
    return 0;

}

