/*
Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las. 
*/


#include <stdlib.h>
#include <stdio.h>

int main(){
    float vlr,ang2;

    //obter entrada (quantidade de dinheiro em reais):
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nDigite o valor:R$ ");
    scanf("%f",&vlr);


    //1 dólar é  R$ 1,80;
    printf("\nEm dolar você possui: US$ %f", vlr/1.80);
    //1 marco alemão é  R$ 2,00;
    printf("\nEm marco alemão você possui: DM %f", vlr/2);
    // 1 libra esterlina, de R$ 3,57
    printf("\nEm libra esterlina você possui: £ %f", vlr/3.57);

    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++");
    return (0);
}