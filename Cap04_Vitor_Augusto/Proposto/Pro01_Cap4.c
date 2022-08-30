/*1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1,nota2,nota3,nota4,med,nota_exame;
    //obter as 4 notas
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    printf("\nInforme primeira Nota: "); 
    scanf("%f",&nota1);

    printf("\nInforme a segunda nota: "); 
    scanf("%f",&nota2);

    printf("\nInforme a terceira Nota: "); 
    scanf("%f",&nota3);

    printf("\nInforme a quarta Nota: "); 
    scanf("%f",&nota4);

    // Efetuar calculo de media
    med = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("\nA sua Nota e: %f",med);
    printf("\nSituacao:");
    //Mostar saida de situacao
    if (med < 7){
        printf("Reprovado");
    }else {
        printf("Parabens, voce esta aprovado");
    }
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
        
    return(0);
}