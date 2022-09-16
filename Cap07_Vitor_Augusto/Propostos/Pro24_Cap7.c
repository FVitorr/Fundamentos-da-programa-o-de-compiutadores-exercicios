#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz 4  5, calcule e mostre um vetor com cinco posições,
onde cada posição contém a soma dos elementos de cada coluna da matriz. O programa deverá mostrar
apenas os elementos do vetor maiores que dez. Se não existir nenhum elemento maior que dez, deverá
mostrar uma mensagem. 
*/
#define l 4
#define c 5

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
    for (int i = 0; i < c ; i ++){ //soma dos elementos de cada coluna da matriz
        soma_col[i] = 0;
        for (int j = 0; j < l - 1; j++){
           soma_col[i] = soma_col[i] + m[j][i];
        }
    }
    int erro = 0;
    for (int i = 0; i < c ; i ++){
        if(soma_col[i] > 10){
            printf("\nSoma: %f", soma_col[i]);
            erro = 1;
        }
    }
    if (erro == 0){
        printf("\n Nenhum valor do vetor é maior que 10\n");
    }

return(0);
}