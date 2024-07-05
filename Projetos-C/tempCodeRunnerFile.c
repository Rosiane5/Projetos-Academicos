#include<stdio.h>

 int main() 
{    
    int opcao;  

    printf("Escolha uma opcao de cor:");    
    printf("\n1 para vermelho");    
    printf("\n2 para amarelo");    
    printf("\n3 para azul");    
    printf("\n4 para branco\n");    
    printf("A opcao sera: ");    
    scanf ("%d", &opcao);    
switch(opcao)    
   {        
        case 1:        
           printf("A cor escolhida foi vermelho!");        
           break;        
        case 2:         
           printf("A cor escolhida foi amarelo!");        
           break;        
        case 3:        
           printf("A cor escolhida foi azul!");        
           break;        
        case 4:        
           printf("A cor escolhida foi branco!");        
           break;        
        default:        
           printf("A opcao escolhida nao se relaciona a nenhuma cor disponivel!");        
        break;    
      }    
      return 0;
  }