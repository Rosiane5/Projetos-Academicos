#include<stdio.h>

 void multiplos(int n1){
   int mult = n1 * 5;
   printf("%d", mult);
 }

 int main(){
    int  n2;
 do{
     printf("Digite um numero:");
     scanf("%d", &n2);

     if(n2 % 2 != 0){
        multiplos(n2);
     }
    }
 while(n2 % 2 == 0);
    
  

}