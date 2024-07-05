#include <stdio.h>
/*⦁	Faça um algoritmo que leia 13 números e calcule quantos números 
pares ele digitou e quantos ímpares (considere o número 0 como par).
*/
int main(){
 int num, impar = 0 , par = 0, cont; 
 for(cont = 0; cont < 13; cont++){
    printf("Informe os numero %d:\n", cont + 1);
    scanf("%d", &num);
    if(num % 2 == 0){
        par += 1;
    }
    else if(num % 2 != 0){
        impar += 1;
    }
    }
  printf("Foi digitado %d numeros PARES.\n", par);
  printf("E %d numeros IMPARES", impar);
  return 0;
   
}