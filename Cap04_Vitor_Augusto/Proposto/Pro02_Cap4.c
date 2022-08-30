/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1,nota2,med;
    //obter as 3 notas
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    printf("\nInforme primeira Nota: "); 
    scanf("%f",&nota1);

    printf("\nInforme a segunda nota: "); 
    scanf("%f",&nota2);

    //calcular media
    med = (nota1 + nota2) / 2 ;
    //Mostrar saidas
    printf("Sua nota é %f",med);
    printf("\nSituacao: ");
    if (med >= 0 && med < 3){
        printf("Reprovado");
    }else  if (med >= 3 && med < 7){
        printf("Exame");
    }else {
        printf("Aprovado");
    }
    return(0);
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
}