#include <stdlib.h>
#include <stdio.h>

/*
* Faça um programa que, no momento de preencher um vetor com oito números inteiros, 
* já os armazenede forma crescente. 
*/
#define t 4
int main() {
    int n[t];
    int i, j, aux;

    for (i = 0; i < t; i++) {
        printf("Informe um numero: ", i + 1);
        scanf("%d", &n[i]);
    }

    //Buble sort
    for (i = 0; i < t; i++) {
        for (j = i + 1; j < t; j++) {
            if (n[i] > n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    printf("\nSaida: \n[");
    for (j = 0; j < t; j++) {
        printf(" %d ", n[j]);
    }
    printf("]\n\n");
    return ();
}
