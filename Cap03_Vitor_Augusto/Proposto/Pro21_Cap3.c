/* 
Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo;
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float slr,hr_trabalhada,hr_extra,hr_vlr,hrex_vlr,slr_bruto;

    //obter entrada horas trabalhadas,  salário mínimo e horas extras trabalhadas
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\nInforme a quantidade de horas trabalhas: ");
    scanf("%f",&hr_trabalhada);
    printf("\nInforme o salario minino: R$");
    scanf("%f",&slr);
    printf("\nInforme a quantidade de horas extra trabalhada: ");
    scanf("%f",&hr_extra);

    //a hora trabalhada vale 1/8 do salário mínimo
    hr_vlr = slr * 1/8;
    // a hora extra vale 1/4 do salário mínimo;
    hrex_vlr = slr * 1/4;
    // o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
    // salário bruto mais a quantia a receber pelas horas extras.
    slr_bruto = (hr_trabalhada * hr_vlr) + (hr_extra * hr_extra);
    printf("\nO salário a receber é de: R$ %f",slr_bruto);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
    return(0);
}