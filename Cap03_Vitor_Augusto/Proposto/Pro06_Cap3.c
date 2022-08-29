/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 15:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
    que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
    salário final. 
 */

#define comissao 0.04

int main(int argc, char** argv) {
    
    // Entradas salário fixo do funcionário e o valor de suas vendas
    float slr_fixo,vlr_vendas, vlr_comi, vlr_salario;
    
    printf("+++ Simulador - Salario a Receber +++");
    
    printf("Informe o Salario fixo:");
    scanf("%f",&slr_fixo);
    
    printf("Informe o valor de suas Vendas:");
    scanf("%f",&vlr_vendas);
    
    //Calculo para obter a comissao
    
    vlr_comi = vlr_vendas * comissao;
    printf("Informe o valor de suas Vendas:");
    
    // Calculo Salario Total 
    vlr_salario = vlr_comi + slr_fixo

    return (EXIT_SUCCESS);
}

