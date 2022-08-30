/*Faça um programa que receba três números e mostre o maior.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1,num2,num3;
    //obter entradas
    printf("\nInforme o Primeiro Numero:");
    scanf("%f",&num1);
    
    printf("\nInforme o Segundo Numero:");
    scanf("%f",&num2);

    printf("\nInforme o Terceiro Numero:");
    scanf("%f",&num3);
    // analisar qual o maior 
    if (num1 > num2 && num1 > num3){ //num1 é o maior 
        printf("O numero %f e o maior",num1 );
    } else if (num2 > num1 && num2 > num3){ //num2 é o maior
        printf("O numero %f e o maior",num2 );
    }else if (num3 > num1 && num3 > num2){ //num3 é o maior
         printf("O numero %f e o maior",num3 );
    }else{
        printf("Mesmo numero em todas as entradas");
    }
    return(0);
}