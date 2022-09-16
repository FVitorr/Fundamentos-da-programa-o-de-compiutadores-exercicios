#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz 10  10 com números inteiros, execute as trocas especificadas a seguir e mostre a matriz resultante:
■■ a linha 2 com a linha 8;
■■ a coluna 4 com a coluna 10;
■■ a diagonal principal com a diagonal secundária;
■■ a linha 5 com a coluna 10.
*/
#define l 10
#define c 10

int main(){
    int m[l][c],cont = 0;
    //preencher vetor
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            /*
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]); 
            */
           m[i][j] = cont;
           cont++;
        }
     //printf("\n");
    }

    //mostrar vetor
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    //a linha 2 com a linha 8;
    printf("\n");
    int aux = 0;
    for (int i = 0; i < l; i++){
        aux = m[1][i];
        m[1][i] = m[7][i];
        m[7][i] = aux;
    }
    //a coluna 4 com a coluna 10;
    for (int i = 0; i < c; i++){
        //printf (" %d ",m[i][9]);
        aux = m[i][3];
        m[i][3] = m[i][9];
        m[i][9] = aux;
    }
    //a diagonal principal com a diagonal secundária;
    cont = c - 1;
    for (int i = 0; i < c; i++){
        aux = m[i][i];
        m[i][i] = m[i][cont];
        m[i][cont] = aux;
        //printf(" %d ",m[i][cont]);
        cont--;
    }
    //a linha 5 com a coluna 10.
    for (int i = 0 ; i < l; i++){
        aux = m[4][i];
        m[4][i] = m[i][9];
        m[i][9] = aux; 
    }

    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
return(0);
}