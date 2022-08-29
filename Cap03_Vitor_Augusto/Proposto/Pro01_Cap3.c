/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 14:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * . Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
    segundo.
 */
int main(int argc, char** argv) {
    float num1,num2,result;
    
    //Obter os dois valores

    printf("\nInforme o primeiro numero: ");
    scanf("%f",&num1);
    
    printf("\nInforme o segundo numero: ");
    scanf("%f",&num2);
    
    //Calcular e exibir resultado:
    result = num1 - num2;
    printf("\n%f - %f = %f",num1,num2,result);
    

    return (EXIT_SUCCESS);
}

