/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 31 de Março de 2022, 16:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. 
 */
int main(int argc, char** argv) {
    int num1, num2 ,num3 ,num4 ,resultado;
    //obter as entradas
    printf("Digite o primeiro numero:");
    scanf("%d",&num1);
    printf("Digite o segundo numero:");
    scanf("%d",&num2);
    printf("Digite o terceiro numero:");
    scanf("%d",&num3);
    printf("Digite o quarto numero:");
    scanf("%d",&num4);
    //realizar a operação 
    resultado = num1 + num2 + num3 + num4;
    //Mostrar na tela
    printf("O resultado é %d",resultado);
           
    return (EXIT_SUCCESS);
}

