#include <stdio.h>

int main(){
    int num, soma = 0;
    printf("Informe o numero desejado:\n");
    scanf("%d", &num);
    while(num != 0){
        soma += num;
        printf("A soma e %d\n", soma);
        printf("Informe o  numero desejado:\n");
        scanf("%d", &num);

    }
    printf("O numero e igual a 0");
}