/*
Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
b) a área de uma esfera; sabe-se que A = p R2;
c) o volume de uma esfera; sabe-se que V = ¾ * p R3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14

int main(){
    float raio,comp,area,volum;
    //obter entrada raio
    printf("\nDigite o valor do Raio: ");
    scanf("%f",&raio);

    //calcular o valor do comprimento
    comp = 2 * pi * raio;
    //calcular a aréa
    area = pi * powf(raio,2);
    //calcular o volume
    volum = ((3/4)* pi * powf(raio,3));
    //mostrar saida 
    printf("\n*************************************");
    printf("\nComprimento: %f",comp);
    printf("\nAréa: %f",area);
    printf("\nVolume: %f",volum);
    printf("\n*************************************\n");
}