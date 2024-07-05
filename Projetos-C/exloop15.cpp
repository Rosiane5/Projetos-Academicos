#include <stdio.h>
/*⦁	Faça um programa em C++ que solicite ao usuário digitar 211 números e 
imprima a sua média e se esta média é maior que 10, menor que 10 ou vale 10. */

int main(){
    int num, soma = 0, media = 0;
    

    for(int cont = 0; cont < 211; cont++ ){
        printf("Informe um numero:\n");
        scanf("%d", &num);

        soma += num;
        media = soma / 211;
        
    }
        if(media > 10){ 
            printf("A media e %d, e maior que 10", media);
        }
        
        else if(media < 10){ 
            printf("A media e %d, e  menor que 10", media);
        }
        else if(media == 10){
            printf("A media e %d, e igual a 10", media);

        }
        
    
    return 0;
    
}