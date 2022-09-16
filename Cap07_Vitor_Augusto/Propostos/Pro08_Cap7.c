#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que preencha duas matrizes 3  8 com números inteiros, calcule e mostre:
■■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3  8;
■■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3  8. 
*/
#define l 2
#define c 3

int main(){
    int m[l][c], m1[l][c],s[l][c],d[l][c];
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
        //obter 2 matriz
    printf("\n -- Matriz 02 --\n");
    for (int i = 0; i < l ;i++){
        for (int j = 0; j < c ; j++){
            printf("Informe um numero: ");
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    // soma das duas matrizes
    //mostra soma
    printf("\n-- Soma Matrizes --\n");
    for (int i = 0; i < l ;i++){
        for (int j = 0; j < c ; j++){
            //terceira matriz também de ordem 3  8;
        s[i][j] = m[i][j] + m1[i][j];
        d[i][c] = m[i][j] - m1[i][j];
        printf(" %d ",s[i][j]);
        }
        printf("\n");
    }
    //mostra diferença
    printf("\n-- Diferenca Matrizes --\n");
    for (int i = 0; i < l ;i++){
        for (int j = 0; j < c ; j++){
            printf(" %d ",s[i][j]);
        } 
        printf("\n");
    }

return(0);
}