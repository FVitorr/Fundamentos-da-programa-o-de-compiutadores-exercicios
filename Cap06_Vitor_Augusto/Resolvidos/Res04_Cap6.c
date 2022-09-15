#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores
resultantes. O primeiro vetor resultante deve conter os números positivos e o segundo, os números negativos. Cada vetor resultante vai ter, no máximo, oito posições, que não poderão ser completamente
utilizadas.
*/
#define len_vetor 8

int main(){
    int vetor[len_vetor],n_positivos[len_vetor],n_negativos[len_vetor];

    //preencher o vetor
    printf("--- Vetor 1 --- \n");
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    //separar positivo de negativo
    for (int i = 0; i < len_vetor; i++){
        int num = vetor[i];
        if (num > 0){ //positivo
            n_positivos[i] = num;
            n_negativos[i] = 0;
        }else {
            n_positivos[i] = 0;
            n_negativos[i] = num;
        }
    }
    //mostrar resultado
    printf("\nValores Informados:\n");
    for (int element = 0; element < len_vetor; element++){
        printf("%d   ", vetor[element]);
    }
    printf("\nValores Positivos:\n");
    for (int element = 0; element < len_vetor; element++){
        printf("%d   ", n_positivos[element]);
    }
    printf("\nValores Negativos:\n");
    for (int element = 0; element < len_vetor; element++){
        printf("%d   ", n_negativos[element]);
    }

return(0);
}