#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■■ os números múltiplos de 2;
■■ os números múltiplos de 3;
■■ os números múltiplos de 2 e de 3. 
*/
#define len_vetor 7
int main(){
    int vetor[len_vetor],mult2[len_vetor],mult3[len_vetor],mult2e3[len_vetor];

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    int contr2 = 0,contr3 = 0,contr2e3 = 0;
    
    for (int i =0 ; i < len_vetor; i++){
        //multiplos de 2 
        if (vetor[i]%2 == 0){
            mult2[contr2] = vetor[i];
            contr2++;
        }
        //multiplos de 3
        if (vetor[i]%3 == 0){
            mult3[contr3] = vetor[i];
            contr3++;
        }
        //os números múltiplos de 2 e de 3.
        if (vetor[i]%3 == 0 && vetor[i]%2 ==0){
            mult2e3[contr2e3] = vetor[i];
            contr2e3++;
        }
    }
    //mostrar saida 
    printf("\nMultiplos de 2:\n[");
    for (int i =0 ; i< contr2; i++){
        printf(" %d ",mult2[i]);
    }
    printf("]\nMultiplos de 3:\n[");
    for (int i =0 ; i< contr3; i++){
        printf(" %d ",mult3[i]);
    }
    printf("]\nMultiplos de 2 e de 3:\n[");
    for (int i =0 ; i< contr2e3; i++){
        printf(" %d ",mult2e3[i]);
    }
    printf("]\n\n");

return(0);
}