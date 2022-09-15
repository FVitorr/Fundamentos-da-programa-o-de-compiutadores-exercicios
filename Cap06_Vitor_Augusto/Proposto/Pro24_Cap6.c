#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.
*/
#define len_vetor 15
int main(){
    int vetor[len_vetor];

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    //definir se é primo 
    //for para todos elementos do vetor 
    printf("\nNumeros Primos:\n [");
    for (int element = 0 ; element < len_vetor; element++){
        int num = vetor[element];
        int cont = 0;
        //laço para testar se é primo
        for (int j = 2; j <= num; j ++){
            if (num % j == 0){ //se divisivel add um em cont 
                cont = cont + 1;
            }
        }
        if (cont == 1){
            printf(" %d ",num);
        }
    }
    printf("]\n\n");
return(0);
}
