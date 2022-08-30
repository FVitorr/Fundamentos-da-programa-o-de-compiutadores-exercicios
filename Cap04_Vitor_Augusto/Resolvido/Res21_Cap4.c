/*Faça um programa que receba:
■■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do
estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
■■ o peso da carga do caminhão em toneladas;
■■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro
entre 10 e 40. 
Calcule e mostre:
■■ o peso da carga do caminhão convertido em quilos;
■■ o preço da carga do caminhão;
■■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem;
■■ o valor total transportado pelo caminhão, preço da carga mais imposto. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int cod_estado,cod_carga;
    float peso,vlr_carga,vlr_imposto; // peso em toneladas
    //obter entradas 
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o codigo do Estado: ");
    scanf("%d",&cod_estado);
    printf("Informe o peso (t): ");
    scanf("%f",&peso);
    printf("Informe o codigo da carga: ");
    scanf("%d",&cod_carga);
    printf("\n+++++++ Extrato +++++++\n");
    //verificar veracidade das entradas cod_estado e cod_carga
    if ((cod_estado >= 1 && cod_estado <= 5) && (cod_carga >= 10 && cod_carga <= 40)){
        //o peso da carga do caminhão convertido em quilos; 1t = 1000kg
        peso = peso * 1000; 

        printf("\nPeso (KG): %f",peso);
        // o preço da carga do caminhão; deacordo com o cod da carga
        if (cod_carga <= 20){ //preço por quilo 100
            vlr_carga = peso * 100;
        }else if (cod_carga > 20 && cod_carga <= 30){ //preço por quilo 250
            vlr_carga = peso * 250;
        }else{ //maior q 30 preço por quilo 340
            vlr_carga = peso * 340;
        }
        print("\nValor Carga: R$ %f",vlr_carga)
        //o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem;
        switch (cod_estado)
        {
        case 1: // imposto de 35%
            vlr_imposto = vlr_carga * 0.35;
            break;
        case 2: // imposto de 25%
            vlr_imposto = vlr_carga * 0.25;
            break;
        case 3: // imposto de 15%
            vlr_imposto = vlr_carga * 0.15;
            break;
        case 4: // imposto de 5%
            vlr_imposto = vlr_carga * 0.05;
            break;
        default:
            vlr_imposto = 0;
            break;
        }
        printf("\nImposto: R$ %f",vlr_imposto);
        //o valor total transportado pelo caminhão, preço da carga mais imposto. 
        printf("\nValor Total: R$ %f",vlr_imposto + vlr_carga);
    }else {
        printf("Valores informados sao invalidos ");
    }


    return(0);
}