/*Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do
polígono. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n_lado;

    //obter entrada número de lados de um polígono convexo
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nDigite o número de lados de um polígono convexo: ");
    scanf("%d",&n_lado);


    //Calcular qtd de diagonais
    printf("\nQuantidade de diagonais: %d", (n_lado * (n_lado - 3)/2 ));

    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    return (0);
}