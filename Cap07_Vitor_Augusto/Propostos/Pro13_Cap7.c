#include <stdlib.h>
#include <stdio.h>

/*
*. Elabore um programa que: preencha uma matriz 6  4; 
recalcule a matriz digitada, onde cada linha deverá ser
 multiplicada pelo maior elemento da linha em questão; 
 mostre a matriz resultante. 
*/
#define l 3
#define c 2

int main(){
    int m[l][c],m_l[l];

    //obter matriz  
    for (int i = 0; i < l; i++){
        m_l[i] = 0;
        for (int j = 0; j < c; i++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);

        }
    }
    //maior elemento da linha
    for (int i = 0; i < l; i++){
        m_l[i] = 0;
        for (int j = 0; j < c; i++){
            if (m[i][j] > m_l[i]){
                m_l[i] = m[i][j];
            }
        }
    }

    for (int i = 0; i < l; i++){
        printf(" %d ",m_l[i]);
    }

return(0);
}