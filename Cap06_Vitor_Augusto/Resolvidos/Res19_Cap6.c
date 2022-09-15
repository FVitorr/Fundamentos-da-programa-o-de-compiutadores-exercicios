#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha dois vetores, A e B, com vinte caracteres cada. A seguir,
troque o 1 elemento de A com o 20de B, 
o 2 de A com o 19 de B, 
e assim por diante, até trocar o 20o de A com o 1o de B. 
Mostre os vetores antes e depois da troca.
*/
#define t 5
int main(){
    int x[t],y[t],aux;
    //preencher vetor
    printf("\n-- Primeiro Vetor --\n");
    for (int i = 0; i < t ;i++){
        printf("Informe um Numero: ");
        scanf("%d",&x[i]);
    }
    printf("\n-- Segundo Vetor --\n");
    for (int i = 0; i < t ;i++){
        printf("Informe um Numero: ");
        scanf("%d",&y[i]);
    }

    printf("-- Primeiro Vetor Informado--\n[");
    for (int i = 0; i < t ;i++){
        printf(" %d ",x[i]);
    }
    printf("]\n-- Segundo Vetor Informado--\n[");
    for (int i = 0; i < t ;i++){
        printf(" %d ",y[i]);
    }
    printf("]\n\n\n");

    //alterar elementos
    int i_y = t - 1; //index reverso para y
    for (int i = 0; i < t ;i++){
        //primeiro elemento de x com ultimo de y
        aux = x[i];
        x[i] = y[i_y];
        y[i_y] = aux;

        i_y--;
    }
    //mostrar saida
    printf("-- Primeiro Vetor \n  [");
    for (int i = 0; i < t ;i++){
        printf(" %d ",x[i]);
    }
    printf("]\n-- Segundo Vetor \n    [");
    for (int i = 0; i < t ;i++){
        printf(" %d ",y[i]);
    }
    printf("]\n");



return(0);
}