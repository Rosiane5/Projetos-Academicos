#include <iostream>
#include <stdio.h>


int main() 
{
 float n1, n2, n3, media1;
 int num1, num2, num3, media2; 

printf("Antonio digite 3 numeros: ");
scanf("%f %f %f", &n1, &n2, &n3);
printf("Fabiana digite 3 numeros: ");
scanf("%d %d %d", &num1, &num2, &num3);

media1 = (n1 + n2 + n3) / 3;
media2 = (num1 + num2 + num3) / 3;
 
 printf("A mdia digitada pelo o usuario, Antonio foi %.2f\n", media1);
 printf("A media digitada pelo o usuario, Fabiano e %d\n", media2);
 printf("A somas das duas media e %.2f", media1 + media2);
 return 0;

}