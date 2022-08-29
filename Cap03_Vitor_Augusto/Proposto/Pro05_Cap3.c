/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 15:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%. 
 */

#define desconto 10

int main(int argc, char** argv) {
    float prc,n_prc;
    // Obter preço do produto 
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nInforme o preço do produto: R$");
    scanf("%f",&prc);
    
    //Calculo do desconto preço - (preço* desconto / 100)
    
    n_prc = prc - (prc* desconto / 100);
    printf("\nValor do produto com desconto R$ %f\n",n_prc);
     printf("++++++++++++++++++++++++++++++++++++++++++++++++++");
    
    

    return (EXIT_SUCCESS);
}

