#include <iostream>
#include <stdio.h>


int main()
{  float d, velo, temp;
   printf("Qual a quilometragem km? ");
   scanf("%f", &d);
   
   velo = 90;
   temp = d / velo;
    
  printf("O tempo estimado do percuso e de: %.2f minutos ", temp);
  return 0;

}