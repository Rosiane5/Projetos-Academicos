#include <iostream>
#include <stdio.h>


int main() 
{
  int ingres, t1, t2, cort;
  
  printf("Qual a quantidade de ingresso: ");
  scanf("%d", &ingres);

  t1 = (7.0 / 9 ) * ingres;
  t2 = (ingres - t1) * ( 3.0 /4 );
  cort = ingres - t1 - t2;

  printf("A quantidade de ingresso que cada time irar receber e, 1 time: %d \n", t1);
  printf("2 time: %d \n", t2);
  printf("E cortesia %d \n", cort);



}