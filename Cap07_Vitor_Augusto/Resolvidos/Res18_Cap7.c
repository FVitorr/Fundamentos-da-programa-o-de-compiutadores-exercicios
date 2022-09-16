#include <stdlib.h>
#include <stdio.h>

/*
Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, 
o programa deverá distribuir
esses elementos em uma matriz 3 × 6 e, no final, mostrar a matriz gerada.
*/

#define l 3
#define c 6
#define V 18

int main() {
    int v[V], m[l][c];
    int i, j, p = 0, cont = 0;
    //preencher vetor
    printf("\n--> Valores para prencher o vetor: \n");
    for (i = 0; i < V; i++) {
        printf("\tV[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("Matriz: \n");
    //Montar matriz e exibir na tela
    for (i = 0; i < l; i++) {
        cont = 0;
        for (j = 0; j < c; j++) {
            m[i][j] = v[p];
            printf(" %d ", m[i][j]);

            if (cont == c - 1) {
                printf("\n");
            }
            cont++;
            p++;
        }
    }
    return (0);
}