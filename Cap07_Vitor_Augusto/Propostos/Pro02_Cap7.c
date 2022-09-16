#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que preencha uma matriz 2  4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha;
■■ a média dos elementos pares da matriz. 
*/
#define l 2
#define c 4

int main(){
    int m[l][c],qtd = 0,qtd_p = 0,total = 0;
    //preencher vetor 
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);

            if (m[i][j] >= 12 && m[i][j] <= 20){
                qtd++;
            }
            if (m[i][j]%2 == 0){
                qtd_p++;
            }
        }
        printf("\n");
    }

    float med_p = qtd_p / l*c;
    printf("---- Matriz Gerada ----\n\n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\nQuantidade de numeros entre 12 e 20: %d",qtd);
    printf("\nMedia de numerais pares: %f",med_p);

return(0);
}