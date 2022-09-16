#include <stdlib.h>
#include <stdio.h>
/*
Crie um programa que preencha uma matriz 10  20 com números inteiros e some cada uma das linhas, 
armazenando o resultado das somas em um vetor. A seguir, o programa deverá multiplicar cada
elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante.
*/
#define l 10
#define c 20

int main(){
    int m[l][c],s[l],c_soma = 0,r[l][c],s_tpm = 0;
    for (int i = 0; i < l; i++){
        s_tpm = 0;
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d", &m[i][j]);
            s_tpm = s_tpm + m[i][j];
        }
        s[c_soma] = s_tpm;
        c_soma++;
        printf("\n");
    }
    //multiplicar cada elemento da matriz pela soma da linha correspondente 
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            r[i][j] = m[i][j] * s[i];
        }
    }
    //mostrar saida
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",r[i][j]);
        }
        printf("\n");
    }
   
return(0);
}