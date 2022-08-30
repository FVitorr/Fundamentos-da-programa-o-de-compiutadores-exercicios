/*. Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
Calcule e mostre:
■■ O valor do aumento, usando as regras que se seguem*/


#include <stdlib.h>
#include <stdio.h>

int main(){
    float preco,vlr_adc,vlr_imposto,p_custo,vlr_desc,n_preco;
    char refrig;
    int cat;
    //Obter entrada preço, tipo e refrigeração
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o preco: R$ ");
    scanf("%f",&preco);

    printf("\n(1 - alimentacao 2 - limpeza  3 - Vestuario)");
    printf("\nOpcao: ");
    scanf("%d",&cat);

    printf("\n(R - Produtos que necessitam de refrigeracao   N - produtos que nao necessitam de refrigeracao)");
    printf("\nOpcao: ");
    scanf("\n%c",&refrig);

    if (cat>=1 && cat <=3 && (refrig == 'R' || refrig == 'N')){ // verificar se entrada tipo é valida
        printf("\n+++++++ Extrato +++++++\n");
        //O valor do aumento, usando as regras que se seguem
        if (preco <= 25){  //categoria 123
            if (cat == 1){ // aumento de 5%
                vlr_adc = preco * 0.05;
            }else if (cat == 2){// para tipo 2
                vlr_adc = preco * 0.08; // aumento de 8%
            }else if (cat == 3){// para tipo 3
                vlr_adc = preco * 0.10; // aumento de 10%
            }
        }else { //categoria 123
            if (cat == 1){ // aumento de 12%
                vlr_adc = preco * 0.12;
            }else if (cat == 2){// para tipo 2
                vlr_adc = preco * 0.15; // aumento de 15%
            }else if (cat == 3){// para tipo 3
                vlr_adc = preco * 0.18; // aumento de 18%
            }
        }
        printf("\nValor Adicional: R$ %f",vlr_adc);

        //O valor do imposto
        if (cat == 2 || refrig == 'R'){ // 5% de imposto
            vlr_imposto = preco * 0.05;
        }else{ //8% de imposto
            vlr_imposto = preco * 0.08;
        }
        printf("\nImposto:R$ %f",vlr_imposto);

        //O novo preço, ou seja, o preço mais aumento menos imposto. 
        p_custo = preco + vlr_adc - vlr_imposto;

        printf("\nNovo Preco: R$ %f",p_custo);

        //A classificação
        if (n_preco<=50){
            printf("\nClassificacao: Barato");
        } else if (n_preco > 50 && n_preco < 120){
            printf("\nClassificacao: Normal");
        }else{
            printf("\nClassificacao: Caro");
        }
    }  else{
        printf("\nDados Invalidos");
    }
    printf("\n\n++++++++++++++++++++++\n");
    return(0);
}