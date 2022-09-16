#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que preencha uma matriz 8  6 de inteiros, calcule e mostre a média dos elementos
das linhas pares da matriz.
*/
#define l 4
#define c 3

int main(){
    int m[l][c],s_p[l],qtd;
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    // média dos elementos das linhas pares da matriz.
    for (int i = 0; i < l;i++){
        qtd = 0;
        for (int j = 0; j < c; j++){
            if (m[i][j]%2 == 0){
                qtd++;
            }
        }
        s_p[i] = qtd;
    }
    for (int i = 0; i < l;i++){
        float d = s_p[i];
        printf("\nLinha %d \tMedia Pares: %.2f",i, (d/l));
    }

return(0);
}