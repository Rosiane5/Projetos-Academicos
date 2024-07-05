#include <stdio.h>

int main(){

  int num;
  printf("Digite numero:\n");
  scanf("%d", &num);
  while(num < 100){
   printf("O numero digitado e %d\n", num);
   printf("Digite numero:\n");
   scanf("%d", &num);
  }
  printf("O numero e maior que 100");
}