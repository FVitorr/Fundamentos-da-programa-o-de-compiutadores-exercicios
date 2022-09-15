#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares. 
*/
#define len_vetor 10
int main(){
    int vetor[len_vetor];

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    //vetor par e impar 
    int v_par[len_vetor],i_par = 0;
    int v_impar[len_vetor],i_impar = 0;
    for (int i = 0; i < len_vetor; i++){
        if(vetor[i]%2 == 0){
            v_par[i_par] = vetor[i]; 
            i_par++;
        }else{
            v_impar[i_impar] = vetor[i];
            i_impar++;
        }
    }
    //msotrar saida 
    printf("\nVetor Par: \n[");
    for (int i = 0; i < i_par; i++){
        printf(" %d ",v_par[i]);
    }
    printf("]\nVetor Impar: \n[");
    for (int i = 0; i < i_impar; i++){
        printf(" %d ",v_impar[i]);
    }
    printf("]\n\n");
return(0);
}