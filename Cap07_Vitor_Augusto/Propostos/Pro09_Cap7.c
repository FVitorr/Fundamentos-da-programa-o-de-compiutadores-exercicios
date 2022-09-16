#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que preencha uma matriz 3  3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz. 
*/
#define l 3
#define c 3

int main(){
    float m[l][c];
    int n;
    //obter matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%f",&m[i][j]);
        }
        printf("\n");
    }
    //obter numero
    printf("Informe um numero Inteiro: ");
    scanf("%d",&n);

     /*calcular e mostrar a matriz resultante da multiplicação do número digitado por
    cada elemento da matriz. */
    float mr[l][c];
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            mr[i][j] = m[i][j] * n;
            printf(" %2.f ",mr[i][j]);
        }
        printf("\n");
    }
return(0);
}