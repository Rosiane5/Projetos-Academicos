#include <stdio.h>
int main() 
{#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], sexo[20];
    int idade;
    float salario, mediaSalarial;

    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; mov/

    printf("Digite seu sexo (masculino ou feminino): ");
    scanf("%s", sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    
    if (strcmp(sexo, "masculino") == 0) {
        mediaSalarial = 2500.0;
    } else if (strcmp(sexo, "feminino") == 0) {
        mediaSalarial = 1500.0;
    } else {
        printf("Sexo invalido.\n");
        return 0;
    }

    
    if (salario > mediaSalarial) {
        printf("%s esta acima da media salarial para o sexo %s. ", nome, sexo);
        printf("Diferenca: %.2f\n", salario - mediaSalarial);
    } else if (salario < mediaSalarial) {
        printf("%s esta abaixo da media salarial para o sexo %s. ", nome, sexo);
        printf("Diferenca: %.2f\n", mediaSalarial - salario);
    } else {
        printf("%s esta na media salarial para o sexo %s.\n", nome, sexo);
    }

    return 0;
}

}