/*. Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número
de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule e mostre o salário
a receber do funcionário de acordo com as regras a seguir:*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float slr_min,hr_t,hr_ext,vlr_hr,slr_m,acr_d,vlr_hrExtra,grat,imp;
    int num_d;
    //Obter entradas 
    printf("Informe o valor do salario minimo: R$");
    scanf("%f",&slr_m);
    
    printf("Informe as horas trabalhadas: ");
    scanf("%f",&hr_t);

    printf("Informe numero de dependentes: ");
    scanf("%d",&num_d);

    printf("Informe as horas Extra trabalhadas: ");
    scanf("%f",&hr_ext);

    /*O valor da hora trabalhada é igual a 1/5 do salário mínimo. */
    vlr_hr = 1/5 * slr_min;
    /*O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. */
    slr_m = hr_t * vlr_hr;
    /*Para cada dependente, acrescentar R$ 32,00. */
    acr_d = num_d * 32;
    /*Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%. */
    vlr_hrExtra = hr_ext * (vlr_hr + vlr_hr * 50/100);
    /*O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas extras. */
    slr_m = slr_m + acr_d + vlr_hrExtra;
    //printf("O Salario bruto a receber é de: R$ %f",slr_m);

    // calcular imposto
    if (slr_m <= 200 && slr_m < 500) {
        imp = slr_m * 10/100;
    }else if (slr_m > 500){
        imp = slr_m * 20/100;
    }

    slr_m = slr_m - imp;
    //calcular gratificação
    if (slr_m <= 350){
        grat = 100;
    }else if (slr_m > 350){
        grat = 50;
    }
    slr_m = slr_m + grat;

    printf("O Salario a receber e de: R$ %f",slr_m);
    return(0);
}