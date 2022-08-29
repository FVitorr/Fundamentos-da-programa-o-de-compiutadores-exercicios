/* Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. 
Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%.  */  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float slr_min,pc_qwtt,pg_resd,qtd_qwtt,pg_resd_des;
    //Entradas Salario min e qtd quilowwatt
    printf("\n\nInforme o valor do Salario Minino: R$");
    scanf("%f",&slr_min);
    printf("\nInforme a quantidade de Quilowatts consumidas: ");
    scanf("%f",&qtd_qwtt);
    // calculo do preço 1 quilowatt = 1/5 * slr minimo
    pc_qwtt = slr_min / 5;
    //calcullo valor pago residencia = qtd_qwtt * pc_qwtt
    pg_resd = qtd_qwtt * pc_qwtt;
    //Desconto 15%
    pg_resd_des = pg_resd - (pg_resd * 0.15);

    printf("\n\n++++++++++++++++++ EXTRATO ++++++++++++++++++++++++\n\n");

    printf("O valor de cada Quilowatt: R$ %f",pc_qwtt);
    printf("\nO valor a ser pago: R$ %f",pg_resd);
    printf("\nO valor a ser pago + 15/100 de desconto: R$ %f",pg_resd_des);
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    return(0);

}