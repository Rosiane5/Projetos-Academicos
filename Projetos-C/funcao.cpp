#include<stdio.h>

int cubo(int n1){ 
return n1 * n1 * n1;
}

int main(){
    int n2, result;

    printf("Digite o numero para realizar o qualculo:\n");
    scanf("%d", &n2);

   result = cubo(n2);
   printf("%d", result);

}