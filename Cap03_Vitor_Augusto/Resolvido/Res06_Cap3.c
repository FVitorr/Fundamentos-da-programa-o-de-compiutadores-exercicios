#include <stdio.h>                             
#include<stdlib.h> 

/* Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
*sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base */

int main(){
    float sal, sal_receber, grat, imp;
    //Obter Variaveis
    printf("Digite o salario base: R$");
    scanf("%f",&sal);

    //realizar os calculos 
    grat = sal * 1.05;
    imp = sal * (-0.07);
    sal_receber = grat + imp;

    //mostrar resultado    
    printf("Salario a receber; R$%f",sal_receber);
    printf("\n\n+++++++++ Extrato Completo ++++++++++++++++++++\n\n");
    printf("+++++ Salario + Gratificacao: R$ %f",grat);
    printf("\n+++++ Imposto: R$ %f \n\n",imp);
    return(0);

}
