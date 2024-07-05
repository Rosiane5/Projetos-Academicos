#include <stdio.h>
int main(){
  
  int num, met = 0;
  do{  
       printf("Informe o numero: ");
       scanf("%d", &num);
       if(num >= 150)
       {
         met = num / 2;
         printf("O valor da metade e %d\n", met);
       }
    } while(num >= 150);
      printf("O numro digitado e menor que 150");

  

}