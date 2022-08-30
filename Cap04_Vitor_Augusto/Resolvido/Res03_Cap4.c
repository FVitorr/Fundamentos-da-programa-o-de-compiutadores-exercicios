#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba dois números e mostre o maior.
 */
int main(int argc, char** argv) {
    float num1,num2;
    //Obter entradas
    printf("\nInforme o Primeiro Numero:");
    scanf("%f",&num1);
    printf("\nInforme o Segundo Numero:");
    scanf("%f",&num2);
    //selecionar o maior e mostrar na telas
    if (num1 > num2){
        printf("\nO Numero %f e maior que o %f",num1,num2);
    }else {
        printf("\nO Numero %f e maior que o %f",num2,num1);
    }

    return (EXIT_SUCCESS);
}
