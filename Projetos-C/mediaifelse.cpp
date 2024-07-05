#include <iostream>
#include <stdio.h>

int main() 
{
   int n1;
   int n2;  
   int media;

   printf("Digite um numero:");
   printf("Digite outro numero: ");
   scanf("%d %d", &n1, &n2);

   media = (n1 + n2)/ 2;

    if((media  > 12)&&(media <= 30))
     {
      printf("A media e : %d", media);
     }
else 
    {
      printf("A %d e maior que o percentual desejado.", media);
    }
    
}