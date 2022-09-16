#include <stdlib.h>
#include <stdio.h>

/*
Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da
linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz
4  7 com números reais, calcule e mostre seu MINMAX e sua posição (linha e coluna).
*/
#define l 3
#define c 3

int main(){
    int m[l][c],m_elemento = 99999,l_min = 1,mimmax;
    //preencher a matriz
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d", &m[i][j]);
            //encontrar menor elemento da matriz
            if (m[i][j] < m_elemento ){
                m_elemento = m[i][j];
                l_min = i;
            }
        }
        printf("\n");
    }
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }

    //printf(" %d ",l_min);
    for (int j = 0; j < c; j++){
        //printf("%d",j);
        if (m[l_min][j] > m_elemento){
            mimmax = m[l_min][j];
        }
    }
    printf("\nMinMax: %d ",mimmax);


return(0);
}