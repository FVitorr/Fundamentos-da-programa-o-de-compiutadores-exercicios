#include <stdio.h>                             
#include <stdlib.h> 

/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.*/

int main(){
    float dep,tx_juros,red;

    // Obter os valores de entrada Deposito e Taxa de juros
    printf("\n\nDigite o valor do deposito: R$");
    scanf("%f",&dep);
    printf("\nDigite o valor da taxa de juros (somente numeros):");
    scanf("%f",&tx_juros);

    //calculo do rendimento + deposito
    red = (dep * tx_juros / 100) + dep ;

    //mostrar saida
    printf("\n\n========= Extrato Completo ========= \n\n");

    printf("Valor do rendimento: R$%f",dep * tx_juros / 100);
    printf("\n\nValor total: R$%f",red);
    printf("\n\n====================================");
    return(0);
}