/*
Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M — matutino; V
— vespertino; ou N — noturno), a categoria (O — operário; G — gerente) e o número de horas trabalhadas no mês 
de um funcionário. Suponha a digitação apenas de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. Calcule e mostre:
■■ O coeficiente do salário, de acordo com a tabela a seguir.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float slr_min,tpm_servico,vlr_imposto,vlr_cof,slr_liq,slr_bruto,vlr_gratf,vlr_aAlim;
    char turno,cat;
    //Obter entrada o valor do salário mínimo, o turno de trabalho, a categoria  e número de horas trabalhadas no mês
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o Salario Minimo: R$ ");
    scanf("%f",&slr_min);
    printf("Informe o Turno: ");
    scanf("\n%c",&turno);
    printf("Informe a Categoria: ");
    scanf("\n%c",&cat);
    printf("Numero de horas trabalhadas no mes: ");
    scanf("%f",&tpm_servico);

    if (((turno == 'M' || turno == 'm') || (turno == 'V' || turno == 'v') || (turno == 'N' || turno == 'n')) && ((cat == 'o'|| cat == 'O') || (cat == 'G' || cat == 'g'))){
        printf("\n+++++++ Extrato +++++++");
        //O coeficiente do salário
        if (turno == 'M' || turno == 'm'){ //10% do salario minimo
            vlr_cof = slr_min * 0.1;
        } else if (turno == 'V' || turno == 'v'){ // 15% do salario minimo
            vlr_cof = slr_min * 0.15;
        } else if (turno == 'N' || turno == 'n') {// 12% do salario minimo
            vlr_cof = slr_min * 0.12;
        }
        printf("\nCoeficiente do Salario: R$ %f",vlr_cof);
        //O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coeficiente do salário. 
        slr_bruto = tpm_servico * vlr_cof;
        printf("\nSalario Bruto: R$ %f",slr_bruto);
        //O imposto
        if (cat == 'o'|| cat == 'O'){
            if (slr_bruto >= 300){ // 5% de imposto
                vlr_imposto = slr_bruto * 0.05;
            }else {// 3% de imposto
                vlr_imposto = slr_bruto * 0.03;
            }
        } else if (cat == 'G' || cat == 'g'){
            if (slr_bruto >= 400){ // 6% de imposto
                vlr_imposto = slr_bruto * 0.06;
            }else {//// 4% de imposto
                vlr_imposto = slr_bruto * 0.04;
            }
        }
        printf("\nImposto: R$ %f",vlr_imposto);
        //A gratificação
        if ((turno == 'N' || turno == 'n' ) && tpm_servico > 805){ //para qm trabalha a noite e mais de 80h
            vlr_gratf = 50; 
        }else{
            vlr_gratf = 30;
        }
        printf("\nGratificacao: R$ %f",vlr_gratf);
        //O auxílio alimentação
        if ((cat == 'o'|| cat == 'O') || (vlr_cof <= 25)){ // operario e coeficiente menor igual a 25 recebe 1/3 do slr
            vlr_aAlim = 1/3 * slr_bruto;
        } else{
            vlr_aAlim  = 1/2 * slr_bruto;
        }
        printf("\nVale Alimentacao: R$ %f",vlr_aAlim);
        //O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação. 
        slr_liq = slr_bruto - vlr_imposto + vlr_gratf + vlr_aAlim;
        printf("\nSalario Liquido: R$ %f ",slr_liq);
        printf("\n++++++++++++++++++++++\n");
    } else{
        printf("Dados Invalidos");
    }
    return(0);
}
