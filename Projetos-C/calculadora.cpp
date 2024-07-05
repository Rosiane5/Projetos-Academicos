#include<stdio.h>
#include <windows.h>

// calculadora 
// função soma 

float soma(float n1, float n2){ 
    float resultado = n1 + n2;
    return resultado;
}


// função subitração

float subtracao(float n1, float n2){
    float resultado = n1 - n2;
    return resultado;

}
// função multiplicação

float multiplicacao(float n1, float n2){
    float resultado  = n1 * n2;
    return resultado;
}

// função divisao

float divisao(float n1, float n2){
    if( n2 == 0)
    {
        printf("Não e possivel realizar operacao");
    }
    else{ 
        float resultado = n1 / n2;
     
    return resultado; 

    }

}

// função potência

float potencia(float base, float expoente){
    float resultado = 1;

    for(int i = 0; i < expoente; i++){ 
       resultado *= base;
    }
     return resultado;
}
// função porcentagem 

float porcentagem(float n1, float n2)
{
    float resultado = (n1 * n2) / 100;
    return resultado;
}

 void espaco(){
    printf(".........................");
 }
int main() 
{

    float resultado = 0, x, y;
    char ex, opcao = 0;
    int contador = 0;
    
    espaco();
    printf("\nCALCULADORA\n");
    espaco();
    
     
    
     
      Sleep(8000);
      system("cls");
    
    while(ex = 'd'){ 
    
        
  
      printf("\n ");
    
      scanf("%f  %c %f", &x, &opcao, &y);
      if(x == 1 || x != 1){
         printf("\n0");
         Sleep(50);
         system("cls");
        }
    
      switch (opcao)
     
     {

        case '+':
          resultado = soma(x, y);
           printf("O resultado e: %.2f\n", resultado);
           x = resultado;
          break;

         case '-':
           resultado = subtracao(x, y);
           printf("O resultado e: %.2f\n", resultado);
           x = resultado;
           break;

        case '*':
          resultado = multiplicacao(x, y);
          printf("O resultado e: %.2f\n", resultado);
          
          break;

        case 'x':
          resultado = multiplicacao(x, y);
          printf("O  resultado e: %.2f\n", resultado);
          x = resultado;
          break;

        case ':':
        case '/':
          resultado = divisao(x, y);
          printf("O  resultado e: %.2f\n", resultado);
          x = resultado;
          break;

        case '^':
        case '~':
          resultado = potencia(x, y);
          printf("O  resultado e: %.2f\n", resultado);
          x = resultado;
          break;

        case '%':
          resultado = porcentagem(x, y);
          printf("O  resultado e: %.2f\n", resultado);
          x = resultado;
          break;
        
        case 'D':
        case 'd':("DESLIGANDO") ;

        default:
          printf("Opcao invalida");
          
        break;
      
       
    }
    x = resultado;
   
  }
  
  printf("");
 
 
        

    
  return 0;
    

}