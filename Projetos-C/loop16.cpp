#include <stdio.h>

/*⦁	Faça um programa em C++ que solicite um número ao usuário e imprima 
“A disciplina de Algoritmos é mamão com açúcar!!!” enquanto ele estiver digitando um número par.
*/
int main(){
  int numero;

  printf("Digite um numero:\n");
  scanf("%d", &numero);
  
  while(numero % 2 == 0){ 
    printf("A disciplina de Algoritmos e mamao com acucar!!!\n");
    
    printf("Digite um numero:\n");
    scanf("%d", &numero);

   
  }
  printf("FIM!!");
  return 0;
}