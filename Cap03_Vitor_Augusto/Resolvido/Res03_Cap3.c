/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 31 de Março de 2022, 17:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
 */
int main(int argc, char** argv) {
    
    int num1, num2 , num3, peso1, peso2 , peso3;
    float resultado;
    //Obter os valores
    printf("Digite o primeiro numero:");
    scanf("%d",&num1);
    printf("Digite o primeiro peso:");
    scanf("%d",&peso1);
    printf("Digite o segundo numero:");
    scanf("%d",&num2);
    printf("Digite o segundo peso:");
    scanf("%d",&peso2);
    printf("Digite o terceiro numero:");
    scanf("%d",&num3);
    printf("Digite o terceiro peso:");
    scanf("%d",&peso3);
    //realizar a operação de media ponderada 
    resultado = (num1 * peso1 + num2 + peso2 + num3 * peso3)/ (peso1 + peso2 + peso3);
    //mostrar na tela
    printf("A média ponderada é %f \n",resultado);

           
    
    return (EXIT_SUCCESS);
}

