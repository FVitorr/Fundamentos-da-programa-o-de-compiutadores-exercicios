#include <stdlib.h>
#include <stdio.h>

/*
*Um elemento Aij de uma matriz é dito ponto de sela da matriz A se, e somente se, Aij for, ao mesmo
tempo, o menor elemento da linha i e o maior elemento da coluna j. Faça um programa que carregue
uma matriz de ordem 5  7, verifique se a matriz possui ponto de sela e, se possuir, mostre seu valor
e sua localização.
*/
#define l 3
#define c 3
int main(){
    //menor elemento da linha i e maior elemento da coluna j
    //preencher vetor
    int m[l][c],m_linha = 99999,isAij = 0;
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]); 
        }
        printf("\n");
    }
    int cont = 0;
    //mostrar maatriz
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ",m[i][j]); 
        }
        printf("\n");
    }
    //pegar menor elemento linha
    int index_j = 0,index_i = 0;
    for (int i = 0 ; i < l; i++){
        m_linha = 99999;
        for(int j = 0; j < c; j++){
            //menor item
            if (m[i][j] < m_linha){
                m_linha = m[i][j];
                index_j = j;
                index_i = i;
            }
        }
        //printf("Menor %d linha %d",m_linha,i);
        //verificar qual o maior da coluna (i)
        int m_column = 0;
        for (int k = index_i; k < l; k++){
            //printf("%d",m[k][index_j]);
            
            if (m[k][index_j] > m_column){
                m_column = m[k][index_j];
            }
        }
        if (m_linha == m_column){
            printf("\nPonto de Sela: Valor %d Localizacao: [ %d, %d ]",m_linha,index_i,index_j);
            break;
        }
        cont++;
    }
return(0);
}