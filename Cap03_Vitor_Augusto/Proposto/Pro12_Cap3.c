#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.*/

int main(){
    float slr_min,slr_func,qtd_slr;
    //Obter entradas
    printf("\nInsira o valor do salário mínimo: R$ ");
    scanf("%f",&slr_min);
    printf("\nInsira o valor do salário recebido: R$ ");
    scanf("%f",&slr_func);
    //Efetuar calculos
    qtd_slr = slr_func / slr_min;
    printf("\nA quantidade de salarios recebido foi de R$ %f",qtd_slr);

    return(0);
}