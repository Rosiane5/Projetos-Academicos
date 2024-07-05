#include <iostream>
#include <stdio.h>


int main() 
{
  int idade, dias;

  printf("Quantos anos voce tem: ");
  scanf("%d", &idade);
  
  dias = idade * 365;

  printf("Voce tem %.2d, de dias vividos.", dias);
  return 0;


}
