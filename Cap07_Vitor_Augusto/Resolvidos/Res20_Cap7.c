#include <stdlib.h>
#include <stdio.h>

/*
*. Crie um programa que utilize uma matriz com dimensões máximas de cinco linhas e quatro colunas
e solicite que sejam digitados os números (desordenadamente), armazenando-os, ordenadamente, na
matriz.
Observe o exemplo que se segue.
Supondo que sejam digitados os seguintes números: 10 – 1 – 2 – 20 – 30 – 17 – 98 – 65 – 24 – 12 – 5 – 8
– 73 – 55 – 31 – 100 – 120 – 110 – 114 – 130, estes deverão ser armazenados na matriz da seguinte maneira:
*/
#define l 5
#define c 4
#define v_ l*c

int main() {
    int v[v_], m[l][c];
    int i, j, aux, p = 0;

    //preencher vetor
    for (i = 0; i < v_; i++) {
        printf("Informe um numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    //organizar vetor
    for (i = 0; i < v_; i++) {
        for (j = i + 1; j < v_; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    //passar para a matriz com as dimensões corretas
    printf("-- Matriz --\n");
    for (i = 0; i < l; i++) {
        aux = 0;
        for (j = 0; j < c; j++) {
            m[i][j] = v[p];
            printf(" %d ", m[i][j]);

            if (aux == c - 1) {
                printf("\n");
            }
            aux++;
            p++;
        }
    }
    return (0);
}