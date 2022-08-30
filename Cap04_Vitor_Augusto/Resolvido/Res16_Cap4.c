/*Faça um programa que receba o preço atual e a venda média mensal do produto, calcule e mostre o
novo preço.*/
#include <stdlib.h>
#include <stdio.h>

int main (){
    float pre_atual,n_preco;
    int v_media;
    //obter entradas 
    printf ("\n********************************\n");
    printf("Informe o preco atual do produto: R$ ");
    scanf("%f",&pre_atual);

    printf("\nInforme quantidade media de venda: ");
    scanf("%d",&v_media);

    // para venda media  < 500 preço atual < 30 tem um aumento de 10%
    if (pre_atual < 30 && v_media < 500){
        //aumento de 10%
        n_preco = pre_atual * 1.1;
    // para venda media  >= 500 e venda media  < 1200 preço atual >= 30 e preço atual < 80 tem um aumento de 15%
    }else if (v_media >= 500 && v_media < 1200 && pre_atual >= 30 && pre_atual <80){
        //aumento de 15%
        n_preco = pre_atual * 1.15; 
    // para venda media  >= 1200 preço atual >= 80 tem um desconto de 20%
    }else if (v_media >= 1200 && pre_atual >= 80){
        //desconto de 20%
        n_preco = pre_atual * 0.8 ; 
    }
    printf ("\n********************************\n");
    printf ("O novo preco e R$ %f \n",n_preco);
    printf ("\n********************************\n");
    
    return(0);
}