/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 14:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba três números, calcule e mostre a multiplicação desses números. 
 */
int main(int argc, char** argv) {
    float num1,num2,num3,mult;
    
    printf("\n++++ Multiplicação de Três numeros ++++ \n");
    
    //Obter os 3 valores
    printf("\nInforme o primeiro numero: ");
    scanf("%f",&num1);
    
    printf("\nInforme o segundo numero: ");
    scanf("%f",&num2);
    
    printf("\nInforme o terceiro numero: ");
    scanf("%f",&num3);
    
    //Multiplicar e mostrar a saida
    
    mult = num1 * num2 * num3;
    printf("%f * %f * %f = %f",num1,num2,num3,mult);
    
   
    return (EXIT_SUCCESS);
}

