#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. 
 *Mostre, em seguida, os quatro números em ordem decrescente. Suponha
que o usuário digitará quatro números diferentes.
 */
int main(int argc, char** argv) {
    float num1,num2,num3,num4;
    //obter entradas
    printf("\nInforme o primeiro Numero:");
    scanf("%f",&num1);
    
    printf("\nInforme o numero conseguitivo ao digitado:");
    scanf("%f",&num2);
    
    printf("\nInforme outro numero conseguitivo ao digitado :");
    scanf("%f",&num3);
    
    printf("\nInforme um numero qualquer");
    scanf("%f",&num4);
    
    //realizar comparaçoes
    
    if (num4 < num1){ // num4 como o ultimo
        printf("\nA ordem decrescente é %.1f - %.1f - %.1f - %.1f ",num3,num2,num1,num4);
    }else if (num4 < num2){ //Num4 como penultimo
        printf("\nA ordem decrescente é %.1f - %.1f - %.1f - %.1f ",num3,num2,num4,num1);
    }else if (num4 < num3){ //Num4 como Antepenultimo
        printf("\nA ordem decrescente é %.1f - %.1f - %.1f - %.1f ",num3,num4,num2,num1);
    }else{ //num4 como primeiro
        printf("\nA ordem decrescente é:\n %.1f - %.1f - %.1f - %.1f ",num4,num3,num2,num1);
    }
   
    return (EXIT_SUCCESS);
}

