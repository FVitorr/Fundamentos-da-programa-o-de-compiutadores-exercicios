#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz 6  3, calcule e mostre:
■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna. 

*/
#define l 6
#define c 3

int main(){
    int m[l][c],maior = 0,menor = 999999,i_maior,j_maior,i_menor,j_menor;
    //preencher vetor 
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
            //verificar maior e menor
            if (maior <= m[i][j]){
                maior = m[i][j];
                i_maior = i;
                j_maior = j;
            }
            if (menor >= m[i][j]){
                menor = m[i][j];
                i_menor = i;
                j_menor = j;
            }
        }
    }
    printf("\nMaior Numero M[%d][%d] = %d",i_maior,j_maior,maior);
    printf("\nMenor Numero M[%d][%d] = %d",i_menor,j_menor,menor);

return(0);
}