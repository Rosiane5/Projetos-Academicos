#include <stdio.h>
int main(){
    int num [6][6];
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            printf("digite o elemento da linha %d, coluna %d:", +i, j+1);
            scanf("%d", &num[i][j]);
        }
    }
}