#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz 20  10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante. 
*/
#define l 2
#define c 2

int main(){
    int m[l][c],soma_col[c];
    //obter matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    //obter soma coluna
    for (int i = 0; i < c; i++){
        soma_col[i] = 0;
        for (int j = 0; j < l; j++){
            soma_col[i] = soma_col[i] + m[j][i];
        }
    }
    //multiplicar a soma da coluna por cada elemnto da mesma
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < l; j++) {
            m[j][i] = m[j][i] * soma_col[i];
        }
    }
    //mostrar saida
    for ( int i = 0; i < l; i++) {
        for ( int j = 0; j < c; j++) {
            printf( "%d ", m[i][j]);
        }
        printf("\n");
    }
return(0);
}