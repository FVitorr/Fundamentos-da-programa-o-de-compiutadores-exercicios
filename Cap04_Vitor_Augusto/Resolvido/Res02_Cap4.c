/*Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 6,0.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1,nota2,nota3,med,nota_exame;
    //obter as 3 notas
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    printf("\nInforme primeira Nota: "); 
    scanf("%f",&nota1);

    printf("\nInforme a segunda nota: "); 
    scanf("%f",&nota2);

    printf("\nInforme a terceira Nota: "); 
    scanf("%f",&nota3);

    // Efetuar calculo de media
    med = (nota1 + nota2 + nota3) / 3;
    printf("\nA sua Nota é: %f",med);
    printf("\nSituacao:");
    if (med < 3){
        printf("Reprovado");
    }else if (med >= 3 && med < 07){
        printf("Exame Final");
        nota_exame = 12 - med;
        printf("\n\n    Deve Tirar no minimo %f para poder ser aprovado",nota_exame);
    } else {
        printf("Parabens, voce esta aprovado");
    }
        
    return(0);
}