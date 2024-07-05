#include <iostream>
#include <stdio.h>

int main()

{

 int n1, n2, media;

  printf("Inforne o numero deseijado:\n ");
  scanf("%d", &n1);
  printf("Informe o segundo numero deseijado:\n");
  scanf("%d", &n2);

 media = ( n1 + n2 ) / 2;

if (media > 15)
 {
 
    printf("A media e maior que 15 !");
 }

else
  {
    printf("A média não ultrapassou o valor de 15");
  }
 return 0;

}