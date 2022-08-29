/* 
. Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos. 
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float hora,mm;

    //obter entrada (quantidade de dinheiro em reais):
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nDigite a(s) hora(s): ");
    scanf("%f",&hora);
    printf("\n\nDigite o(s) minuto(s): ");
    scanf("%f",&mm);


    //a hora digitada convertida em minutos; 1h - 60
    printf("\nHora digitada em minuto(s): %f", hora * 60);
    //o total dos minutos
    printf("\nO total em Minutos informado foi de: %f", hora * 60 + mm);
    // o total dos minutos convertidos em segundos
    printf("\nO total em Segundos informado foi de: %f",  (hora * 60 + mm)*60);

    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    return (0);
}