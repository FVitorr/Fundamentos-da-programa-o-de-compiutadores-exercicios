/*
Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    float ang1,ang2;

    //obter entrada (os dois angulos):
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nDigite o valor do primeiro angulo: ");
    scanf("%f",&ang1);
    printf("\n\nDigite o valor do segundo angulo: ");
    scanf("%f",&ang2);


    //Calcular qtd de diagonais
    printf("\nO terceiro angulo é: %f", (180- ang1 - ang2));

    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    return (0);
}