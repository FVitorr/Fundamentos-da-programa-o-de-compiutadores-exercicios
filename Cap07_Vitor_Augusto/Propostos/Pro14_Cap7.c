#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz 2  3, calcule e mostre a quantidade de elementos
 da matriz que não pertencem ao intervalo [5,15]. 
*/
#define l 2
#define c 3

int main(){
    int m[l][c],qtd = 0;
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
    }
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            if (m[i][j] < 5 && m[i][j] < 15){
                qtd = qtd + 1;
            }
        }
    }
    printf("Quantidade de elementos da matriz que nao pertencem ao intervalo [5,15]: %d",qtd);

return(0);
}