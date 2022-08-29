#include <stdio.h>                             
#include <stdlib.h> 

/*Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base*/

int main(){
    float sal, sal_receber, grat, imp;

    //obter o valor do salario base
    printf("\n\nDigite o salario base: R$");
    scanf("%f",&sal);

    //Calcular e mostrar os resultados na tela

    printf("\n\n+++++++++++++++++ Extrato Completo ++++++++++++++++++++\n\n");
    printf("         Salario + Gratificacao: R$ %f",sal + 50);  // Calculo da gratificação 
    printf("\n         Imposto: R$ %f",sal * (-0.1)); // |Imposto
    printf("\n         Salario a receber; R$%f", sal + 50 + (sal * (-0.1))); //Salario total
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    return(0);

}
