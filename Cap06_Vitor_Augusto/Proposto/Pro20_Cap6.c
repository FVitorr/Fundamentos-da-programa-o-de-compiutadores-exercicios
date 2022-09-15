#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa 
que leia um vetor com dez posições para números inteiros e mostre somente os números positivos.
*/
#define len_vetor 10
int main(){
    int vetor[len_vetor],t_v=0,i;

    //preencher o vetor 
    for (i = 0; i < len_vetor;i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[t_v]);
        //se maior que 0 i sofre incremento 
        if (vetor[t_v] > 0){
            t_v++;
        }
    }
    //mostrar saida
    printf("\nVetor:\n [");
    for (int j = 0; j < t_v;j++){
        printf(" %d ",vetor[j]);
    }
    printf("]\n\n");


return(0);
}