/*Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float lado,a;
    //Obter as variaveis 
    printf("\n\n++++++++++ Area de um Quadrado ++++++++++");
    printf("\n\nInforme a medida do lado desse quadrado:");
    scanf("%f",&lado);
    //obter área
    a = pow(lado,2);
    //mostar valores
    printf("\nA area desse quadrado é: %f",a);
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    return(0);
}