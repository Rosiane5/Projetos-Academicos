#include <iostream>


int main () {
	
	int n1;
	int n2;
	int resto;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	resto = n1 % n2;
	printf("O resto da Divisão e : %.1d", resto);

 }