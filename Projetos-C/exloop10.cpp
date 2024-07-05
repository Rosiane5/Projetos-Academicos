#include <stdio.h>
 /*⦁	Faça um algoritmo em C++ que solicite ao usuário o seu nome, idade e quantas vezes ele quer que seja impresso na tela,
  e imprima seu nome sua idade, respectivamente, a quantidades de vezes que ele solicitar.*/

int main(){ 
    char nome[50];
    int vezes = 0, idade, cont = 0;
    
    printf("Informe o nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("\nQual a sua idade:\n");
    scanf("%d", &idade);

    printf("\nQuantas vezes que exibir na tela?\n");
    scanf("%d", &vezes);

    for(cont = 0; cont < vezes; cont++){
        printf("%s\n", nome);
        printf("%d anos\n", idade);
        
    }
    printf("FIM!!!");
    return 0;
    


}