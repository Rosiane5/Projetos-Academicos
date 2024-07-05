#include <stdio.h>

int main() 
{ int cubo, num=0;

 printf("Informe um numero:\n");
 scanf("%d", &num);
while(num >= 0)
{
 cubo = num  * num * num;  
 printf("O valor do cubo e %d\n", cubo);
 printf("\nInforme um numero:\n");
 scanf("%d", &num);

}
printf("O numero e menor que zero");
return 0;

}
