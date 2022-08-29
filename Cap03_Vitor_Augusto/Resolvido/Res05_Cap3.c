/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 31 de Março de 2022, 17:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostreo valor do aumento e o novo salário.
 */
int main(int argc, char** argv) {
    float salario,novo_salario,percentual;
    //Receber as entradas (salario e percentual de aumento)
    printf("Digite o valor do salario atual: R$");
    scanf("%f",&salario);
    
    printf("Digite o valor do percentual(Digite somente numeros):");
    scanf("%f",&percentual);
    //Calculo do novo salario
    novo_salario = salario * (1+ percentual/100);
    //Mostrar o novo salario
    printf("O novo salario com aumento de %f % é de R$ %f \n",percentual,novo_salario);

    return (EXIT_SUCCESS);
}

