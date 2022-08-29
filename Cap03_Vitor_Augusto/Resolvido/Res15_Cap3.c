/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de 
fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo..
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int p_fab, perc_d, perc_i;
    float vlr_d, vlr_i;

    // Obter entrada Preço Fabricação, Porcentagem do distribuidor e a porcentagem do imposto
    printf("\nPreco de fabricacao do veiculo:");
    scanf("%d",&p_fab);

    printf("\nPercentual de lucro do distribuidor (somente numeros):");
    scanf("%d",&perc_d);

    printf("\nPercentual do imposto (somente numeros):");
    scanf("%d",&perc_i);

    vlr_d = perc_d * p_fab / 100 ; //Valor do lucro do distribuidor

    vlr_i = perc_i * p_fab / 100; //Valor do Imposto

    //Mostrar saidas
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\n O valor do lucro do distribuidor e equivalente a : R$ %f",vlr_d);
    printf("\n\n O valor dos Impostos e: R$ %f",vlr_d);
    printf("\n\n O valor total do veiculo e: R$ %f",vlr_d + vlr_i + p_fab);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

    return(0);
}