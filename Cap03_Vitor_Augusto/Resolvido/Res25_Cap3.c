/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 14:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *  Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
    Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
    pelo menos, o custo do espetáculo seja alcançado.
 *
 */
int main(int argc, char** argv) {
    
    //Objetivo: quantidade de convites
    float cust, prc_convite;
    int qtd_convite;
    
    //Obter o valor de custo do teatro e o valor de cada convite 
    printf("\nInforme o valor de custo do espetaculo teatral: R$ ");
    scanf("%f",&cust);
    
    printf("\nValor de cada convite: R$");
    scanf("%f",&prc_convite);
    
    //calcular  a qtd de ingresso
    
    qtd_convite = roundf(cust/prc_convite);
    printf("\nA quantidade de convite minino a ser vendido é de: %d und(s)",qtd_convite);
    
    
    
    

    return (EXIT_SUCCESS);
}

