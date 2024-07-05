#include <stdio.h>
/*⦁	Faça um programa em C++ que solicite ao usuário quantas vezes ele quer imprimir a frase 
“A disciplina de Algoritmos é mamão com açúcar!!!”
 e a imprima esta quantidade de vezes na tela.*/
 int main(){
   int vezes;

   printf("Informe quantas vezes, deseja ler a frase:\n");
   scanf("%d", &vezes);
   
   for(int i = 0; i < vezes; i++){
        printf("A disciplina de Algoritmos e mamao com acucar!!!\n");
   }
   return 0;
 }