/*Faça um programa que receba o preço, o tipo (A — alimentação; L — limpeza; e V — vestuário) e a
refrigeração (S — produto que necessita de refrigeração; e N — produto que não necessita de refrigeração) de um produto.
 Suponha que haverá apenas a digitação de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. Calcule e mostre:*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float preco,vlr_adc,vlr_imposto,p_custo,vlr_desc,n_preco;
    char tipo,refrig;
    //Obter entrada preço, tipo e refrigeração
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o preco: R$ ");
    scanf("%f",&preco);

    printf("\n(A - alimentacao L - limpeza  V - vestuario)");
    printf("\nInforme o Tipo (Maiusculo): ");
    scanf("\n%c",&tipo);

    printf("Nescesita de refrigeracao (S/N): ");
    scanf("\n%c",&refrig);

    if ((tipo == 'A' || tipo == 'L' || tipo == 'V')&& (refrig == 'S' || refrig == 'N')){
        printf("\n+++++++ Extrato +++++++");
        //O valor adicional
        if (refrig == 'N'){ // A,L,V

            if (tipo == 'A'){ // para tipo a
                if(preco < 15){
                    vlr_adc = 2 ; 
                }else {
                     vlr_adc = 5; 
                }
            }else if (tipo == 'L'){// para tipo l

                if(preco < 10){
                    vlr_adc = 1.5; 
                }else {
                     vlr_adc = 2.5; 
                }

            }else if (tipo == 'V'){// para tipo v
                if(preco < 30){
                    vlr_adc = 3 ; 
                }else {
                     vlr_adc = 2.5; 
                }
            }
        }else {
            if(tipo == 'A'){
                vlr_adc = 8;
            }
        }
        printf("\nValor Adicional: R$ %f",vlr_adc);
        //O valor do imposto
        if (preco < 25){ // 5% de imposto
            vlr_imposto = preco * 0.05;
        }else{ //8% de imposto
            vlr_imposto = preco * 0.08;
        }
        printf("\nImposto:R$ %f",vlr_imposto);
        // O preço de custo, ou seja, preço mais imposto
        p_custo = preco + vlr_imposto;
        printf("\nPreco de custo: R$ %f",p_custo);
        //O desconto, de acordo com a regra a seguir
        //O produto que não preencher nenhum dos requisitos a seguir terá desconto de 3%, caso contrário,0
        // Tipo: A e Refrigeração: S
        if (tipo == 'A' && refrig == 'S'){
            vlr_desc = 0;
        }else {
            vlr_desc = p_custo * 0.03;
        }
        printf("\nDesconto: - R$ %f",vlr_desc);
        //O novo preço, ou seja, preço de custo mais adicional menos desconto. 
        n_preco = p_custo + vlr_adc - vlr_desc;
        printf("\nPreco Final: R$ %f",n_preco);
        //A classificação
        if (n_preco<=50){
            printf("\nClassificacao: Barato");
        } else if (n_preco > 50 && n_preco < 100){
            printf("\nClassificacao: Normal");
        }else{
            printf("\nClassificacao: Caro");
        }
    }  else{
        printf("\nDados Invalidos");
    }
    printf("\n++++++++++++++++++++++\n");
    return(0);
}