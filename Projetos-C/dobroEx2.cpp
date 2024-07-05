#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int numero;
	int dobro;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	dobro = numero * 2;
	printf("O dobro do  numro digitado e: %2d", dobro);
	
	return 0;
}
