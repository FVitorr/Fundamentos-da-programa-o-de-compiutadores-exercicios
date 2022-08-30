/*Faça um programa que receba dois números e mostre o menor*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float num1,num2;
    //obter entradas
    printf("\nInforme o Primeiro Numero:");
    scanf("%f",&num1);
    
    printf("\nInforme o Segundo Numero:");
    scanf("%f",&num2);
    // analisar qual o maior e mostrar saidas 
    if (num1 < num2){
        printf("O numero %f e o menor",num1 );
    } else if (num1 > num2){
        printf("O numero %f e o menor",num2);
    }else {
        printf("Mesmo numero nas duas entradas");
    }
    return(0);
}

    