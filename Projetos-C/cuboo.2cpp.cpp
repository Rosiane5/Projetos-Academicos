#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    int num;
    int cubo;
	int soma = 3;
	printf("Qual numero deseja calcular o cubo? ");
	scanf("%d", &num);
	
	cubo = pow(num, soma);
	printf("O cubo de %d e:, %d", num, cubo);
	
}