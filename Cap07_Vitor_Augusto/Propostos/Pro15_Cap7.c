#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que preencha uma matriz 12  13 e divida todos os elementos de cada linha pelo
maior elemento em módulo daquela linha. O programa deverá escrever a matriz lida e a modificada. 
*/
#define l 2
#define c 3

int main(){
    int m[l][c],m_l[l]; 
    float r[l][c];
    //preencher matriz
    for (int i = 0; i < l;i++){
        m_l[i] = 0 ;
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
            if (m_l[i] < abs(m[i][j])){//maior elemento em módulo   
                m_l[i] = abs(m[i][j]);
            }
        }
        printf("\n");
    }
    //mostrar matriz informada e gerar matriz resultante
    float div = 0;
    printf ("\n--- Matriz Informada --- \n");
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);

            float  n = m[i][j];
            float  d = m_l[i];

            r[i][j] = n / d;
        }
        printf("\n");
    }
    printf ("\n--- Matriz Resultante --- \n");
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %f ",r[i][j]);
        }
        printf("\n");
    }
return(0);
}