#include <iostream>
#include <stdio.h>


int main() 
{
 int premio, ganhadores, total;

 printf("Valor toatl do premio: ");
 scanf("%d", &premio);
 printf("Qunatos ganhadores: ");
 scanf("%d", &ganhadores);

 total = premio / ganhadores;
 printf("o valor que cada ghandor irar receber e: %.2d", total);

}