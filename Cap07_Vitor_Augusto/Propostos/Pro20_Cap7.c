#include <stdlib.h>
#include <stdio.h>

/*
Elabore um programa que preencha uma matriz 5  5 com números reais e encontre o maior valor da
matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor
encontrado e mostrar a matriz resultante após as multiplicações.
*/
#define l 5
#define c 5

int main(){
    float m[l][c],m_elemento = 0,qtd;
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%f",&m[i][j]);
            if (m[i][j] > m_elemento){
                m_elemento = m[i][j];
            }
        }
        printf("\n");
    }

    //multiplicar diagonal principal
    printf("\n-- Matriz Resultante --\n");
    for (int i = 0; i < l;i++){
        m[i][i] =  m[i][i] * m_elemento;
    }
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %f ",m[i][j]);
        }
        printf("\n");
    }

return(0);
}