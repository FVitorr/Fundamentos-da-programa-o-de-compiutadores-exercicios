#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que preencha uma primeira matriz de ordem 4  5 e uma segunda matriz 5  2.
O programa deverá, também, calcular e mostrar a matriz resultante do produto matricial das duas
matrizes anteriores, armazenando-o em uma terceira matriz de ordem 4  2.
*/
#define l1 2
#define c1 2

#define l2 2
#define c2 3

int main(){
    int m1[l1][c1], m2[l2][c2],m3[l1][c2],mult,soma = 0;
    //preencher as duas matrizes
    printf("\n-- Vetor 1 --\n");
    for (int i = 0; i < l1; i++){
        for (int j = 0; j < c1; j++){
            printf("Informe um Numero: ");
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    printf("\n-- Vetor 2 --\n");
    for (int i = 0; i < l2; i++){
        for (int j = 0; j < c2; j++){
            printf("Informe um Numero: ");
            scanf("%d",&m2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < l2;i++){
        for (int k = 0; k < c2; k++){
             printf(" %d ",m2[i][k]);
        }
    }
    printf("\n");
    // percorrer as linhas da primeira matriz
    for (int i = 0; i < l1 ; i++){
        //percorrer coluna da segunda matriz
        for (int k = 0; k < c2; k++){
            for (int j = 0; j < l2; j++){
                printf("%d ",m2[j][k]);
                mult = m1[i][j] * m2[j][k] ;
                soma = soma + mult;
            }
            m3[i][k] = soma;
            soma = 0;
        }
    }
    for (int i = 0; i < l1; i++){
        for (int j = 0; j < c1; j++){
            printf(" %d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < l2; i++){
        for (int j = 0; j < c2; j++){
            printf(" %d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("\nVetor Resultante: \n");
    for (int linha = 0; linha < l1; linha++){
        for (int coluna = 0; coluna < c2; coluna++)
        {
            printf(" %d ",m3[linha][coluna]);
        }
        printf("\n");
    }

return(0);
}