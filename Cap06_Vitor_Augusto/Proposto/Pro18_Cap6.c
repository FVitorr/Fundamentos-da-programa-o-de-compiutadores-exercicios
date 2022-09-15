#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que preencha um vetor com quinze números, determine e mostre:
■■ o maior número e a posição por ele ocupada no vetor;
■■ o menor número e a posição por ele ocupada no vetor. 
*/

#define len_vetor 5
int main(){
    int vetor[len_vetor],i,num_maior = 0,index_mx,index_mn,num_menor=9999;

    //preencher o vetor 
    for (i = 0; i < len_vetor;i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
        //verificar maior
        if (vetor[i] > num_maior){
            num_maior = vetor[i];
            index_mx = i;
        }
        //verificar menor
        if (vetor[i] < num_menor){
            num_menor = vetor[i];
            index_mn = i;
        }

    }
    //mostrar saida
    printf("\nVetor Informado:\n [");
    for (int j = 0; j < i ;j++){
        printf(" %d ",vetor[j]);
    }
    printf("]\n\n");
    printf("\nNumero Maior: %d\nIndex: %d ",num_maior,index_mx);
    printf("\nNumero Menor: %d\nIndex: %d ",num_menor,index_mn);


return(0);
}