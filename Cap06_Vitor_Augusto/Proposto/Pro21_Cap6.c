#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um vetor com dez posições para números inteiros. 
Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.
*/
#define len_vetor 5
int main(){
    int vetor[len_vetor],i;

    //preencher o vetor 
    for (i = 0; i < len_vetor;i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
        //substituir nulo por i
        if (vetor[i] == 0){
            vetor[i] = 1;
        }
    }
    //mostrar saida
    printf("\nVetor:\n [");
    for (int j = 0; j < i ;j++){
        printf(" %d ",vetor[j]);
    }
    printf("]\n\n");


return(0);
}