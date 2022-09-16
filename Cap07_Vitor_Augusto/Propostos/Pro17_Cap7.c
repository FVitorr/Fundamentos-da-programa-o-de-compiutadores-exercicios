#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
10  10.
*/
#define t 10
int main(){
    int m[t][t],s_m = 0;
        //preencher matriz
    for (int i = 0; i < t;i++){
        for (int j = 0; j < t; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < t;i++){
        s_m = s_m + m[i][i];
    }
    printf("Media Diagonal: %d",s_m);
return(0);
}