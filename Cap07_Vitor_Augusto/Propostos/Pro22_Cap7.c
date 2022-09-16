#include <stdlib.h>
#include <stdio.h>

/*
*. Crie um programa que preencha uma matriz 6  10, some as colunas individualmente e acumule as somas na 7a
 linha da matriz. O programa deverá mostrar o resultado de cada coluna. 
*/

#define l 6
#define c 10

int main(){
    float m[l][c];
    //preencher matriz
    for (int i = 0; i < l - 1;i++){ //deixar ultima linha livre
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%f",&m[i][j]);
        }
        printf("\n");
    }
    float soma_col[c];
    for (int i = 0; i < c ; i ++){ //preencher ultima linha com soma colunas
        soma_col[i] = 0;
        for (int j = 0; j < l - 1; j++){
           soma_col[i] = soma_col[i] + m[j][i];
        }
        m[l-1][i] = soma_col[i];
    }
    //mostrar saida
    for (int i = 0; i < l ;i++){ //deixar ultima linha livre
        for (int j = 0; j < c; j++){
            printf(" %f ",m[i][j]);
        }
        printf("\n");
    }
    
    


return(0);
}