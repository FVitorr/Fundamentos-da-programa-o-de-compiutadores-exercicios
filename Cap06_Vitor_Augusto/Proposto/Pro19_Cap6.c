#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos
 elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 
*/
#define t 10

int main(){
    int x[t],y[t],m[t];

    //preencher o vetor
    printf("--- Vetor 1 --- \n");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&x[i]);
    }
    printf("--- Vetor 2 --- \n");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&y[i]);
    }
    //multiplicar mesmo index
    for (int i = 0;i < t; i++){
        m[i] = x[i]*y[i];
    }
    //mostrar saida
    printf("\nVetor:\n [");
    for (int j = 0; j < t ;j++){
        printf(" %d ",m[j]);
    }
    printf("]\n\n");
return(0);
}