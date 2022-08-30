#include <stdio.h>
#include <stdlib.h>

/*
 * 4. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
 *  digitará três números diferentes.
 */
int main(int argc, char** argv) {
    float num1,num2,num3;
    //obter entradas
    printf("\nInforme o Primeiro Numero:");
    scanf("%f",&num1);
    
    printf("\nInforme o Segundo Numero:");
    scanf("%f",&num2);
    
    printf("\nInforme o Terceiro Numero:");
    scanf("%f",&num3);
    
    // selecionar quem  é menor que quem 
    
    if (num1 < num2 && num1 < num3){ // num 1 como menor
        if (num2 < num3){ // num2 como o 2º menor
            printf("\nA ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",num1,num2,num3);
        } else {// num3 como o 2º menor
            printf("\nA ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",num1,num3,num2);
        }
    }else if (num2 < num3 && num2 < num1){// num2 como menor
        if (num1 < num3){// num1 como o 2º menor
            printf("\nA ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",num2,num1,num3);
        }else{// num3 como o 2º menor
            printf("\nA ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",num2,num3,num1);
        }
    }else if (num3 < num2 && num3 < num1){// num3 como o menor
            if (num2 < num1){// num1 como o 2º menor
                printf("\nA ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",num3,num2,num1);
            }else{// num1 como o 2º menor
                printf("\nA ordem crescente desses numero é: \n %.1f ; %.1f ; %.1f",num3,num1,num2);
        }
    }
    return (EXIT_SUCCESS);
}
