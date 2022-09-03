#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas
*/
int main(){
    int idade,qtd_s50 = 0, qtd_10a20 = 0,qtd_m40 = 0;
    float alt,peso,t_alt = 0;

    for (int pessoas = 1; pessoas <= 5; pessoas++){
        printf("\n++++++++++++++++++++");
        printf("Cadastro 0%d ",pessoas);
        printf("\nInforme Idade:\n");
        scanf("%d",&idade);
        printf("Altura(m):\n");
        scanf("%f",&alt);
        printf("Peso (kg):");
        scanf("%f",&peso);

        if (idade > 50){
            qtd_s50 = qtd_s50 + 1;
        } else if (idade >= 10 && idade <= 20){
            qtd_10a20 = qtd_10a20 + 1;
            t_alt = t_alt + alt;
        } else if (peso < 40){
            qtd_m40 = qtd_m40 + 1;
        }
    }
    printf("\nResultados:\n");
    printf("\nQuantidade de Pessoas com idade superior a 50: %d",qtd_s50);
    printf("\nMedia das Alturas das pessoas com idades entre 10 e 20 anos: %d",qtd_10a20);
    float porc = qtd_m40 * 100 / 5 ;
    printf("\nPorcentagem de pessoas com menos de 40 Kg: %.2f%%",porc);

return(0);
}