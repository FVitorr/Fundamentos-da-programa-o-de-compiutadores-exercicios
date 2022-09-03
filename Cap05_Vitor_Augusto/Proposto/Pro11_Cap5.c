#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■■ o preço final para compra à vista tem desconto de 20%;
■■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■■ os percentuais de acréscimo encontram-se na tabela a seguir. 

*/
#define desconto 0.2

int main(){
    float v_carro = 0,p_final = 0,desc = 0,p_parcelas;
    int par = 0;
    printf("\nInforme o Preco: R$");
    scanf("%f",&v_carro);

    printf("\nValor a Vista: R$ %.2f\n",v_carro - (v_carro * desconto));
    //PARCELAS
    printf("\n+++++++++++++++ Parcelamentos ++++++++++++++++\n");
    printf("\n[Qtd_Parc.] [Acresc.] [Prec_Parc.] [V_Final]" );
    while (par <= 60){
        par = par + 6;
        desc = desc + 0.03;
        p_final = v_carro * (1 + desc);
        p_parcelas = p_final / par;
        
        printf("\n[  %d  ] [  %.2f  ] [ R$%.2f ] [ R$%.2f ] ",par,desc,p_parcelas,p_final);
        
        //par++;
    }
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++");
    
return(0);
}