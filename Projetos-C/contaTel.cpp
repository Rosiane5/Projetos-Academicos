#include <stdio.h>
int main() 
{
    float salario, tel, porc;
   
    printf("Qual o valor do salario:\n");
    scanf("%f", &salario);
    printf("Qual o valor de seus gasto de conta de telefone:\n");
    scanf("%f", &tel);

    porc = tel / salario  * 100;
    
    if (porc <= 5)
      {
        printf("A sua conta esta dentro do planejamento de gastos com telefone celular");
      }
   else if  (porc > 5 && porc < 7)
      {
        printf("Atencao para a sua conta de telefone celular.");
      }
    else 
     {
        printf("A sua conta esta acima do planejamento de gastos com telefone celular. ");
     }
    return 0;



}
