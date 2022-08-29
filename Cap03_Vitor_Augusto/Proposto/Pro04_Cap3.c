/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 14:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda. 
 */
int main(int argc, char** argv) {
    
    float num1, num2, peso1, peso2;
    float resultado;
    
    //Obter as notas
    printf("Digite a primeiro nota:");
    scanf("%f",&num1);
    
    //primeiro peso equivalente a 2
    peso1 = 2;
    
    printf("Digite o segundo numero:");
    scanf("%f",&num2);
    
    //segundo peso equivalente a 3
    peso2 = 3;
    
    //calculo da media ponderada
    resultado = (num1 * peso1 + num2 * peso2)/ (peso1 + peso2);
    
    printf("A Média ponderada é %f \n",resultado);

    return (EXIT_SUCCESS);
}

