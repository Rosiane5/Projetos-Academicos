#include <stdio.h>
/*Elabore um algoritmo em C++ que solicite o tamanho de uma barra de metal e 
calcule quantos pedaços de 3,5 metros podemos partir o tamanho digitado. 
Imprima também o tamanho que sobrará da barra.
*/
int main(){

    printf("Barra de metal!!\n");
    float tam;
    int cont = 0;

    printf("Qual o tamanho de uma barra?\n");
    scanf("%f", &tam);
    printf("\nO tamanho da barra e %.2fm.\n", tam);
    while(tam >= 3.5 ){
        tam -= 3.5;
        cont++;
        printf("O %d pedaco foi cortado.\n", cont + 1);
    }
    printf("O tamanho de pedaco partidos foi de %d\n", cont);
    printf("E sobro, %.2fm", tam);
    return 0;
}



