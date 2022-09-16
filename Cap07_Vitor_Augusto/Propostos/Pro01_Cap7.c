#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz 3  5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20. 
*/
#define l 3
#define c 5

int main(){
    int m[l][c],qtd = 0;
    //preencher vetor 
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);

            if (m[i][j] >= 15 && m[i][j] <= 20){
                qtd++;
            }
        }
        printf("\n");
    }
    printf("---- Matriz Gerada ----\n\n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\nQuantidade de numeros entre 15 e 20: %d",qtd);

return(0);
}