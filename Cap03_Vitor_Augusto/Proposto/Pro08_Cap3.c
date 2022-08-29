#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas */

int main(){
    float peso,g;
    printf("Insira seu peso:");
    scanf("%f",&peso);

    g = peso * 1000;
    printf("Seu peso em gramas corresponde a: %f",g);
    return(0)
}