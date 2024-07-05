#include <stdio.h>
/*Elabore um algoritmo em C++ que solicite um
 número para o usuário e diminua 10% 
 deste número até que ele fique menor que 2. 
 Imprima o valor final e a quantidade de vezes 
 que teve que fazer a operação.*/
int main(){
 float valor = 0;
 int cont = 0;
 printf("Informe um valor:\n");
 scanf("%f", &valor);
 for(cont = 0; valor > 2; cont++){ 
     valor -= valor * 0.1;
    }
 printf("%.2f\n", valor);
 printf("O loop foi repetido %d vezes\n", cont);
 return 0;
}