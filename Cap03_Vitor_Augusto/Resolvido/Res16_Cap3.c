/*Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.  */ 

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n_hora,s_min,s_recb,vlr_h,s_bruto;
    //Obter as entradas horas trabalhadas e o valor do salário mínimo
    printf("Informe a quantidade de Horas Trabalhadas: ");
    scanf("%f",&n_hora);

    printf("Informe o valor do salario minimo : R$ ");
    scanf("%f",&s_min);

    vlr_h = s_min / 2; //Calcular o valor da hora
    s_bruto =  (n_hora * vlr_h) - ((n_hora * vlr_h) * 0.03) ;//Calcular salario descontando o Imposto

    //Mostrar Saida
    printf("\n\n Salario: R$ %f\n", s_bruto);

    return(0);
}