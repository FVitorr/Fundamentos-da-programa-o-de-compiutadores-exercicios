#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 

*/

int main(){
    float peso,eng,ema;
    //Obter o peso 
    printf ("Informe o seu peso:");
    scanf("%f",peso);

    eng = peso * 1.15;
    ema = peso - (peso * 0.20);

    printf("Se a pessoa engordar 15 sobre o peso digitado %f",eng);
    printf("Se a pessoa Emagrecer 20 sobre o peso digitado %f",ema);
    return (0)
}