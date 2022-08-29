/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas. */

#include <stdio.h>
#include <stdlib.h>

#define dias 30.4166
#define mes 12
#define semana 7

int main(){
    int ano_nasc,ano_atual,anos,dias_,meses_;
    float sem;
    //obter entradas
    printf("\nDigite o ano de nascimento: ");
    scanf("%d",&ano_nasc);
    printf("\nDigiite o ano atual: ");
    scanf("%d",&ano_atual);
    //calcular ano
    anos = (ano_atual - ano_nasc);
    //calucular meses
    meses_ = anos * mes;
    //calcular dias
    dias_ = meses_ * dias;
    //calcular semanas
    sem = dias_ / semana;
    //mostrar saidas
    printf("\nA idade dessa pessoa em anos: %d",anos);
    printf("\nA idade dessa pessoa em meses: %d",meses_);
    printf("\nA idade dessa pessoa em dias: %d",dias_);
    printf("\nA idade dessa pessoa em semanas: %f\n",sem);
    return(0);
}