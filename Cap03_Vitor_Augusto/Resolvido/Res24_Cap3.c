/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 5 de Abril de 2022, 14:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *Faça  um  programa  que  receba  uma  hora  formada  por  hora  e  minutos  (um  número  real), 
 * calcule  emostre a hora digitada apenas em minutos. lembre-se de que:
 * a) para quatro e meia, deve-se digitar 4.30; 
 * b) os minutos vão de 0 a 59.
 */

int main(int argc, char** argv) {
    float hora,h,m,mm_total ; 
    
    printf("\n\nInforme a hora (HH.mm): ");
    scanf("%f",&hora);
    //Obter o valor da hora e do minuto
    h = ((int) hora);
    m = hora - h;

   
    //Transformar Hora para minuto 1h - 60 min e somando com os minutos ja definidos pelo usuario.
     //Multiplicar o m por 10 para transformar para inteiro
    
    mm_total = ((h * 60) + (m * 10)); 
    printf("\nA hora informada equivale a : %f minutos", mm_total);
    

    return (EXIT_SUCCESS);
}

