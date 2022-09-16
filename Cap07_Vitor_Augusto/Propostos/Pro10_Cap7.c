#include <stdlib.h>
#include <stdio.h>

/*
*. Crie um programa que preencha uma matriz 5  5 com números inteiros, calcule e mostre a soma:
■■ dos elementos da linha 4;
■■ dos elementos da coluna 2;
■■ dos elementos da diagonal principal;
■■ dos elementos da diagonal secundária;
■■ de todos os elementos da matriz. 
*/
#define l 5
#define c 5

int main(){
    int m[l][c];
    int s_4 = 0,s_c2 = 0,s_dp = 0, s_ds = 0,s =0;
    //obter matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
    /*calcule e mostre a soma:
    ■■ dos elementos da linha 4;*/
    for (int j = 0; j < c; j++){
        s_4 = s_4 + m[3][j];
    }
    printf("\nSoma da linha 4: %d",s_4);
    
    // ■■ dos elementos da coluna 2;
    for (int i = 0; i < l;i++){
        s_c2 = s_c2 + m[i][1];
    }
    printf("\nSoma dos elementos da coluna 2: %d",s_c2);

    //■■ dos elementos da diagonal principal;
    for (int i = 0; i < l;i++){
        s_dp = s_dp + m[i][i];
    }
    printf("\nSoma dos elementos da diagonal principal: %d",s_dp);
    //■■ dos elementos da diagonal secundária;
    int u = c; //ultimo elemento
    for (int i = 0; i < l;i++){
        s_ds = s_ds + m[i][u];
        u--;
    }
    printf("\nSoma dos elementos da diagonal secundaria: %d",s_ds);
    //■■ de todos os elementos da matriz. */
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            s = s + m[i][u];
        }
    }
    printf("\nSoma de todos os elementos da matriz: %d",s);

return(0);
}