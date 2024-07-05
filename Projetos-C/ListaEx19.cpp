#include <iostream>
#include <stdio.h>


int main() 
{ 
float tem, f;

printf("Qual a temperatura em celsius: ");
scanf("%f", &tem);

f = tem * 1.8 + 32; 

printf("A temperatura em Fharenheit e %.2f", f);

}