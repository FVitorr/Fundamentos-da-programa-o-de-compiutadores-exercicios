#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor. 
*/
#define len_vetor 10
int main(){
    int vetor[len_vetor],soma_par = 0,n_negativos[len_vetor];

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    //separar positivos de negativos
    int cont_n = 0;
    for (int i = 0 ; i < len_vetor; i ++){
        if (vetor[i] >= 0){
            soma_par = soma_par + vetor[i];
        }else{
            n_negativos[cont_n] = vetor[i];
            cont_n++;
        }
    }
    //mostrar saida
    printf("\nNumeros Negativos: \n[");
    for (int i = 0; i < cont_n; i++){
        printf(" %d ",n_negativos[i]);
    }
    printf("]\n\n");
    printf("Soma Par: %d",soma_par);
    

return(0);
}