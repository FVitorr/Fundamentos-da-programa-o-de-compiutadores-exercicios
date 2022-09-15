#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha dois vetores de dez elementos numéricos cada um e mostre o vetor resultante
da intercalação deles.
*/
#define len_vetor 10

int main(){
    int vetor[len_vetor],vetor1[len_vetor];

    //preencher os dois vetores 
    printf("--- Vetor 1 --- \n");
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    printf("\n--- Vetor 2 ---\n ");
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor1[i]);
    }

    //mostrar saida 
    //laço for para percorrer toda lista
    for (int element = 0; element < len_vetor; element++){
        printf(" %d - ",vetor[element]);
        printf(" %d - ",vetor1[element]);
    }
return(0);
}