#include <iostream>

int main()  

{ 

char nome[60]; 

int nota1, nota2, nota3, ponto; 

float media; 

 

printf("Qual o seu nome? "); 

scanf("%s", nome); 

printf("Digite a primeira nota: "); 

scanf("%d", &nota1); 

printf("Digite a segunda nota: "); 

scanf("%d", &nota2); 

printf("Digite a terceira nota: "); 

scanf("%d", &nota3); 

 

ponto = nota1 + nota2 + nota3; 

media = (ponto / 1000.0 * 100); 

 

printf("Caro %s, suas notas sao as seguintes: \n", nome); 
printf("Nota 1: %d, pontos em 200 pontos \n", nota1); 
printf("Nota 2 : %d,  290 pontos em 300 pontos \n", nota2); 
printf(" Nota 3 : %d,  500 pontos em 500 pontos\n", nota3); 
printf("Total: %d pontos em 1000 pontos, com media de %.1f \n", ponto, media); 



}