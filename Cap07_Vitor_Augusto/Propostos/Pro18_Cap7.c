#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que preencha uma matriz 5  5 
de números reais, calcule e mostre a soma dos 
elementos da diagonal secundária. 
*/
#define t 5
int main(){
    int m[t][t],s_ds = 0;
    //preencher matriz
    for (int i = 0; i < t;i++){
        for (int j = 0; j < t; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    //soma diagonal segundaria
    int cont = t;
    for (int i = 0; i < t;i++){
        s_ds = s_ds + m[i][cont];
        cont--;
    }
    printf("Soma diagonal segundaria: %d",s_ds);

return(0);
}