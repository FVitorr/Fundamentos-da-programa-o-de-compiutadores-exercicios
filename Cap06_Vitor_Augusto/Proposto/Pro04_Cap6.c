#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram.
*/

#define len_vetor 15
int main(){
    int vetor[len_vetor];
    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    //verificar se existe 30
    for (int i = 0; i < len_vetor; i++){
        if (vetor[i]==30){
            printf("\n\n Numero igual a 30\n Index: %d",i);
        }
    }

return(0);
}