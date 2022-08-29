/*Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F = 180*(C + 32)/100.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float c;
    //obter entrada
    printf("\n\n+++++++++++++++++++++++++++++++++++++++\n");
    printf("\n\nDigite uma Temperatura em celsius: ");
    scanf("%f",&c);

    //Mostrar a saida
    printf("\nEquivale a: %f F\n", ((c * 9/5) + 32));
    printf("\n+++++++++++++++++++++++++++++++++++++++\n");
    return (0);
}