#include <stdlib.h>
#include <stdio.h>

/*
Crie um programa que utilize uma matriz com as dimensões fornecidas pelo usuário e execute as solicitações a seguir.
Para realizar essa tarefa, a matriz deverá ser obrigatoriamente quadrada (número igual de linhas e colunas).
Sendo assim, solicite que seja informada a dimensão da matriz.
Posteriormente, o programa deverá realizar a leitura dos elementos que vão compor a matriz. Por fim,
deverá somar e mostrar os elementos que estão abaixo da diagonal secundária.
*/

int main() {
    int d;
    int p = 0;

    //a matriz deverá ser obrigatoriamente quadrada
    
    printf("Dimensao da matriz: ");
    scanf("%d", &d);

    int m[d][d];
    int diag[d];
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            printf("M[%d][%d] : ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz gerada \n");
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }


    int C = d;
    
    for (int i = 0; i < d; i++) {
        diag[p] = m[i][C - 1];
        p++;
        C--;
    }
    int j_d = d;
    int soma = 0;
    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++){
            //printf("%d\n",j);
            if ( j >= j_d){
                //somar e mostrar os elementos que estão abaixo da diagonal secundária.
                //printf("%d",m[i][j]);
                soma = soma + m[i][j];
            }
        }
        j_d = j_d - 1;
    }
    printf("Diagonal secundaria: \n");
    for (int i = 0; i < p; i++) {
        printf(" %d ", diag[i]);
    }

    printf("\n\nSoma dos elementos que estao\nabaixo da diagonal secundaria: %d\n\n",soma);


    return (0);
}