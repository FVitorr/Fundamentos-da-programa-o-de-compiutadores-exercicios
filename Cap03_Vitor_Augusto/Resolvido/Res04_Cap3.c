/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 31 de Março de 2022, 17:26
 */

#include <stdio.h>
#include <stdlib.h>

//definir a porcentagem como uma constante
#define porcentagem 0.25

/*
 * Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-seque este sofreu um aumento de 25%.
 */
int main(int argc, char** argv) {
    float salario,novo_salario;
    //Obter o salario
    printf("Digite o valor do salario atual: R$");
    scanf("%f",&salario);
    //Calcular
    novo_salario = salario * (1 + porcentagem);
    //Mostrar na tela
    printf("O novo salario com aumento de 25% é R$ %f \n",novo_salario);
   
    return (EXIT_SUCCESS);
}

