#include <stdio.h>

int main()
{

 int num, soma, cont = 0;

 printf("Informe 7 numeros para realizar a soma!!\n");


 for(cont = 0; cont  < 7 ; cont++)
 {
    printf("Informe o %dº numeros para realizar a soma:", cont + 1);
    scanf("%d", &num);
    soma += num;
}
printf("O valor da soma e %d:", soma);
return 0;
}