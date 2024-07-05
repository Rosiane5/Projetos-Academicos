#include <iostream>
#include <stdio.h>


int main() {
	
  float n1;
  float n2;
  float n3;
  float media;
  
  printf("Digite 3 numeros:\n");
  scanf("%f %f %f", &n1, &n2, &n3);
  
  media = (n1 + n2 + n3) / 3;
  
  printf("A media e: %.0f \n", media);
  return 0;
 
}