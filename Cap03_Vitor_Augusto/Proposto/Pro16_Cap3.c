/*. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Obter as entradas
    float vlr_cat1, vlr_cat2, hip;

    printf("Informe o valor do primeiro cateto: ");
    scanf("%f",&vlr_cat1);

    printf("Informe o valor do segundo cateto: ");
    scanf("%f",&vlr_cat2);
    //Fazer os calculos H^2 = C^2 + C^2 
    hip = sqrtf((powf(vlr_cat1,2) + powf(vlr_cat2,2)));
    //Mostrar o resultado
    printf("O valor da Hipotenusa é: %f",hip);

    return(0);
}