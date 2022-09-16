#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz 6  4 com números inteiros, calcule e mostre quantos
elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz com os elementos 
diferentes de 30. No lugar do número 30, da segunda matriz, coloque o número zero
*/
#define l 6
#define c 4

int main(){
    int m[l][c],qtd = 0,r[l][c];
    //preencher vetores
    for (int i = 0 ; i < l; i ++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero");
            scanf("%d",&m[i][j]);
            // se entrada maior q 30
            if (m[i][j] > 30){
                qtd = qtd + 1;
            }
            // se entrada == 30 substituir por 0
            if (m[i][j] == 30){
                r[i][j] = 0;
            }else{
                r[i][j] = m[i][j];
            }
        }
    }
    //mostrar saidas
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    printf("Maiores de 30: %d \nVetor Resultante: \n[",qtd);
    
    for (int  i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",r[i][j]);
        }
        printf("\n");

    }
return(0);
}