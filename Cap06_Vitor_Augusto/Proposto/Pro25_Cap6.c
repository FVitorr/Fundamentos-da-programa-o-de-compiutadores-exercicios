#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que leia um vetor com quinze posições para números inteiros.
 Depois da leitura, divida todos os seus elementos pelo maior valor do vetor. 
 Mostre o vetor após os cálculos. 
*/
#define len_vetor 5
int main(){
    int vetor[len_vetor],num_m=0;
    float vetor_r[len_vetor];

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Digite o %d Numero: ",i + 1);
        scanf("%d",&vetor[i]);
    }
    //separar maior valor
    for (int i = 0; i < len_vetor; i++){
        if (vetor[i] > num_m){
            num_m = vetor[i];
        }
    }
    printf("%d",num_m);
    //divida todos os seus elementos pelo maior valor do vetor. 
    for (int i = 0; i < len_vetor; i++){
        float div =  vetor[i]/num_m;
        printf("%d",vetor[i]);
        vetor_r[i] = div;
    }
    //Mostrar saida
    printf("Vetor Resultante:\n[");
    for (int i = 0; i < len_vetor; i++){
        printf(" %f ",vetor_r[i]);
    }
    printf("]\n\n");

return(0);
}