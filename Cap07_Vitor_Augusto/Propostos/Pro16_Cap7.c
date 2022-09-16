#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz 5  5 e crie dois vetores de cinco posições cada um, que
contenham, respectivamente, as somas das linhas e das colunas da matriz. O programa deverá escrever
a matriz e os vetores criados. 
*/
#define l 5
#define c 5

int main(){
    int m[l][c],v[l],v1[l]; 
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("M[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l;i++){
        v[i] = 0;
        v1[i] = 0;
        for (int j = 0; j < c; j++){
            //soma das linhas
            v[i] = v[i] + m[i][j];
            //soma das colunas
            v1[i] = v1[i] + m[j][i];
        }
    }
    printf ("\n--- Matriz Informada --- \n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < l; i++){
        printf("\nSoma Linha %d: %d",i,v[i]);
        printf("\nSoma Coluna %d: %d",i,v1[i]);
    }

return(0);
}