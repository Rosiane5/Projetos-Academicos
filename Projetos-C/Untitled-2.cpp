#include <stdio.h>
int main(){
    float num, soma = 0;
    int cont = 0;
     

 while(1) {
    
        printf("Digite um numero:\n");
        scanf("%f", &num);
        printf("O numero digitado foi %.2f\n", num);
        
        if(num == 50)
        {
            printf("Fim");
            break;   
        }
           
        
        soma += num;
        cont ++;
        printf("%f\n", soma);

    
    
    }   
     return 0;
}

