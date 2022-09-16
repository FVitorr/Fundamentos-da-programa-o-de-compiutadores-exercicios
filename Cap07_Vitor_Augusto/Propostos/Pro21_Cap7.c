#include <stdlib.h>
#include <stdio.h>

/*
Faça um programa que preencha uma matriz 5  5 de números reais. A seguir, o programa deverá
multiplicar cada linha pelo elemento da diagonal principal daquela linha e mostrar a matriz após as
multiplicações. 
*/
#define l 5
#define c 5

int main(){
    float m[l][c],qtd;
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%f",&m[i][j]);
        }
        printf("\n");
    }

    //multiplicar linha pelo elemento da diagonal principal
    printf("\n-- Matriz Resultante --\n");
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            m[i][j] =  m[i][i] * m[i][j];
        }
    }
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %f ",m[i][j]);
        }
        printf("\n");
    }

return(0);
}