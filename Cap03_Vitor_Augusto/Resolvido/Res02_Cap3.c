/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 31 de Março de 2022, 17:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba três notas, calcule e mostre a média aritmética.
 */
int main(int argc, char** argv) {
    int nota1,nota2,nota3;
    float resultado;
    //Obter as entradas 3notas
    printf("Digite a primeira Nota:");
    scanf("%d",&nota1);
    printf("Digite a segunda Nota:");
    scanf("%d",&nota2);
    printf("Digite a terceira Nota:");
    scanf("%d",&nota3);
    
    //realizar calculo da media
    resultado = ((nota1 + nota2 + nota3) / 3.0);
    
    printf("A Média deste 3 valores é %f", resultado);

    system("pause");

    return (EXIT_SUCCESS);
}

