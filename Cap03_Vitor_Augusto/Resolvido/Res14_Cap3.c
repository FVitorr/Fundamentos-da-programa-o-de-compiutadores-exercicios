#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050.
*/

#define ano 2050

int main(){

    int ano_nas, ano_atua,a,b;

    //Obter as entradas ano nascimento E ATUAL
    printf("Qual o ano de nascimento ? ");
    scanf("%d",&ano_nas);
    printf("Qual o ano atual ? ");
    scanf("%d",&ano_atua);

    //realizar calculos
    a = ano_atua - ano_nas;
    b = ano - ano_nas;

     //Mostrar Saidas
    printf("\nA idade e: %d anos",a);
    printf("\nEm 2050 e: %d anos",b);

    return(0);
}