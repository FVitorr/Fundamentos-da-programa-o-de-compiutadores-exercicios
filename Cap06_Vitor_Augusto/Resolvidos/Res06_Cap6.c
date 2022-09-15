#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor 
com dez números inteiros, calcule e mostre o vetor resultante de uma ordenação decrescente.
*/
#define t 10
int main() {
    
    int vetor[t];
    int i, j, aux;

    for (i = 0; i < t; i++) {
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem dos numeros Informados: \n ");
    for (i = 0; i < t; i++) {
        printf("%d   ", vetor[i]);
    }

    for (i = 0; i < t; i++) {
        /* Para ordernar os números em ordem decrescente usei o métedo bubble sort*/
        for (j = i + 1; j < t; j++) {
            if (vetor[j] > vetor[i]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nNumeros em ordem decressente: ");
    for (j = 0; j < t; j++) {
        printf("%d   ",vetor[j]);
    }
    return (EXIT_SUCCESS);
}