#include<stdio.h>
int main(){
    float notas[4];
    int i;
    // inserindo notas no vetor
    for(i = 0; i < 4; i++){
        printf("com %d nota do aluno:\n", i+1);
        scanf("%f", &notas[i]);
        
    }
    // Mostrando as notas 
     for(i = 0; i < 4; i++){
        printf("\nNota %d = %4.2f", i+1, notas[i]);
     }
}