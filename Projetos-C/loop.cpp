#include <stdio.h>
int main(){
    float num;
    int cont = 0;
     

 while(1) {
    
           printf("Digite um numero:\n");
            scanf("%f", &num);
            printf("O numero digitado foi %.2f\n", num);
    
        for(float i = 0; i < 50; cont++){ 
            printf("%d\n", cont );

    
        if(cont == 50)
            {
            printf("fim ");
            }
            break;
        }   
     return 0;
    }
 }
