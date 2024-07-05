#include <iostream>
#include <stdio.h>


int main() 
{ float agua, mor12, mor3, mor4, and12;
  int porc12, and3, and4;

printf("Valor da conta de agua? ");
scanf("%f", &agua);
printf("Quantos porcentos cada andar paga?");
scanf("%d %d", &and3, &and4);

porc12 = 100 - and4 - and3;
mor12 = (porc12 / 100.0) * agua;
and12 = mor12 / 6;

 mor3 = (and3 / 100.0) * agua;
 mor4 = (and4 / 100.0) * agua;

 printf("O valor que os moradores dos andares 1 e 2 devem pagar %.2f cada.\n", and12);
 printf("O valor que o morador do 3 andar deve pagaa e %3.2f \n", mor3);
 printf("O valor que o morador do 4 anda irar paga e %3.2f \n", mor4);
 return 0;

}