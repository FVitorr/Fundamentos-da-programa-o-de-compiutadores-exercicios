/*Faça um programa que receba o salário base e o tempo de serviço de um funcionário. Calcule e mostre:
■■ O imposto, conforme a tabela a seguir. */


#include <stdlib.h>
#include <stdio.h>

int main(){
    float slr_base,tpm_servico,vlr_imposto,vlr_grat,slr_liq;
    //Obter entrada 
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o Salario Base: ");
    scanf("%f",&slr_base);
    printf("Informe o tempo de serviço: ");
    scanf("%f",&tpm_servico);

    printf("\n+++++++ Extrato +++++++");
    //O imposto
    if (slr_base >= 200 && slr_base <= 450){//imposto de 3%
        vlr_imposto = slr_base * 0.03;
    }else if (slr_base > 450 && slr_base < 700){//imposto de 8%
        vlr_imposto = slr_base * 0.08;
    }else if(slr_base >= 700){//imposto de 12%
        vlr_imposto = slr_base * 0.12;
    }
    printf("\nImposto: R$ %f",vlr_imposto);
    // A gratificação
    if (slr_base > 500){
        if (tpm_servico <= 3){ // grat de 20
            vlr_grat = 20;
        }else { // grat de 30
            vlr_grat = 30;
        }
    }else {
        if(tpm_servico <= 3){ // grat de 23
            vlr_grat = 23;
        }else if (tpm_servico > 3 && tpm_servico <= 6){ // grat de 35
            vlr_grat = 35;
        }else { // grat de 33
            vlr_grat = 33;
        }
    }
    printf("\nGratificacao: R$ %f",vlr_grat);
    //O salário líquido, ou seja, salário base menos imposto mais gratificação. 
    slr_liq = slr_base - vlr_imposto + vlr_grat;
    printf("\nSalario Liquido: R$ %f",slr_liq);
    //A categoria
    if (slr_liq <= 350){//Categoria a
        printf("\nCategoria: A");
    } else if (slr_liq > 350 && slr_liq <=600){
         printf("\nCategoria: B ");
    }else{
        printf("\nCategoria: B ");
    }
    printf("\n++++++++++++++++++++++\n");
    return(0);
}
