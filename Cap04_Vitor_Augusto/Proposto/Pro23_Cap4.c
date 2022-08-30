/*Faça um programa que receba:
■■ o código do produto comprado; e
■■ a quantidade comprada do produto.
Calcule e mostre:
■■ o preço unitário do produto comprado, seguindo a Tabela I;
■■ o preço total da nota;
■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■■ o preço final da nota depois do desconto. */


#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod;
    float qtd,p_uni,des,p_total;

    //obter codigo e a quantidade comprada do produto.
    printf("\n+++++++++++++++++++++++++++++++++++\n");
    printf("Informe o codigo do produto (1-30): ");
    scanf("%d",&cod);
    printf("Informe a quantidade de produto: ");
    scanf("%f",&qtd);
    //preco do produto segundo a tabela
    if (cod >= 1 && cod <= 10){ 
        p_uni = 10;
    }else if (cod > 10 && cod <= 20){ 
        p_uni = 15;
    }else if (cod > 20 && cod <= 30){ 
        p_uni = 20;
    }else if (cod > 30 && cod <= 40){ 
        p_uni = 30;
    }else{
        printf("Codigo Invalido");
        p_uni = 0;
    }
    printf("%f",p_uni);
    //o preço total da nota;
    p_total = p_uni * qtd;
    printf("\n+++++++++++++ Extrato +++++++++++++\n");
    printf("Preco Total: R$ %f",p_total);
    //o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; 
    if (p_total <= 250){ // 5% de desconto
        des = p_total * 0.05;
    }else if (p_total > 250 && p_total <=500){ // 10% de desconto
        des = p_total * 0.1;
    }else { //15%
        des = p_total * 0.15;
    }
    printf("\nDesconto: R$ %f",des);
    printf("\nPreco Final: R$ %f",p_total - des);

    printf("\n+++++++++++++++++++++++++++++++++++\n");
    return(0);
}