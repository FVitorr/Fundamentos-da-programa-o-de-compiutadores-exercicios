#include <stdlib.h>
#include <stdio.h>

/*
16. Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco
números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pelos
números pares gerados pelo elemento do primeiro vetor somado a todos os elementos do segundo vetor; o
segundo será composto pelos números ímpare
*/

int main() {
    int x[10], y[5], pares[10], impares[10];
    int contP = 0, contI = 0, somaY = 0;
    int i, r;

    //P1: Posição pares | P2: Posição dos impares
    int p1 = 0;
    int p2 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &x[i]);
        
        /*Irá verificar se o número digitado é par ou impar e armzanerá no vetor correspondente*/
        if (x[i] % 2 == 0) {
            pares[p1] = x[i];
            p1++;
            contP++;
        } else {
            impares[p2] = x[i];
            contI++;
            p2++;
        }
    }

    printf("\nSegundo vetor\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &y[i]);
        somaY += y[i];
    }

    printf("\n\t1 Vetor resultantes: ");
    for (i = 0; i < contP; i++) {
        printf("%d | ", r = pares[i] + somaY);
    }

    printf("\n\t2 Vetor resultantes: ");
    for (i = 0; i < contI; i++) {
        printf("%d | ", r = impares[i] + somaY);
    }
    printf("\n");
    return (0);
}
