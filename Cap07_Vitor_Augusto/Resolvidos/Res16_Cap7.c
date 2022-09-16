#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz 7  7 de números inteiros e crie dois vetores com 
sete posições cada um que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor
elemento de cada uma das colunas. Escreva a matriz e os dois vetores gerados.
*/

#define l 7
#define c 7
int main(){
    //preencher matriz
    int m[l][c],v1[l],v2[c];
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("\tM[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]); 
        }
        printf("\n");
    }
    for (int i = 0 ; i < l; i++){
        int m_linha = 0,mn_coluna = m[0][i];
        for(int j = 0; j < c; j++){
            //maior elemento da linha 
            if (m[i][j] > m_linha){
                m_linha = m[i][j];
            }
            //menor elemento coluna
            if(m[j][i] < mn_coluna){
                mn_coluna = m[j][i];
            }
        }
        v1[i] = m_linha;
        v2[i] = mn_coluna;
        break;
    }
return(0);
}