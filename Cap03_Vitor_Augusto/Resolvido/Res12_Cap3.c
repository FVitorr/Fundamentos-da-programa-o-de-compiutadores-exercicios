#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro*/

int main() {

    float num1,num2,res1,res2;
    //Obter entradas
    printf("\nDigite o primeiro numero: ");
    scanf("%f",&num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&num2);

    //ELEVAR O PRIMEIRO PELO SEGUNDO
    res1 = pow(num1,num2);
    printf("\nO numero %f elevado a %f e %f",num1,num2,res1);
     //ELEVAR O SEGUNDO PELO PRIMEIRO
    res2 = pow(num2,num1);
    printf("\nO numero %f elevado a %f e %f",num2,num1,res2);

    return(0);
}