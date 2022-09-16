#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz 3  4, calcule e mostre:
■■ a quantidade de elementos pares;
■■ a soma dos elementos ímpares;
■■ a média de todos os elementos. 
*/
#define l 3
#define c 4

int main(){
    int m[l][c];
    int qtd_p = 0,s_i = 0;
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
            if (m[i][j] % 2 == 0){
                qtd_p++;
            }else{
                s_i = s_i + m[i][j];
            }
        }
        printf("\n");
    }
    printf("Total Par: %d",qtd_p);
    printf("Soma Impar: %d",qtd_p);


return(0);
}