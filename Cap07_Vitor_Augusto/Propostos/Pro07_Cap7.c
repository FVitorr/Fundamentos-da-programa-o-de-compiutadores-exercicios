#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz M de ordem 4  6 e uma segunda matriz N de ordem 6 
4, calcule e imprima a soma das linhas de M com as colunas de N. 
*/
#define l 4
#define c 6

#define l1 6
#define c1 4

int main(){
    int m[l][c],m1[l1][c1];
        //obter matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
        //obter 2 matriz
    for (int i = 0; i < l1;i++){
        for (int j = 0; j < c1; j++){
            printf("Informe um numero: ");
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    //calcule e imprima a soma das linhas de M com as colunas de N. 
    int soma_=0;
    for (int i = 0; i < l;i++){
        soma_=0;
        for (int j = 0; j < c; j++){
            soma_= m[i][j] + m1[j][i];
        }
        printf("\nM linha:[%d] + n coluna:[%d]  = %d",i,i,soma_);
    }

return(0);
}