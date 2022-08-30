/*. O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, 
ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  cust_fabr,distribuidor,imposto;

    //obter o custo de fábrica de um carro
    printf("Informe o custo de fabrica de um carro: R$ ");
    scanf("%f",&cust_fabr);
    //Bonificação
    if (cust_fabr < 12000){ //5%  do  distribuidor 
       distribuidor = cust_fabr * 0.05;
       imposto = 0;
    }else if (cust_fabr >= 12000 && cust_fabr <=25000){ // 10% do distribuidor 15% de imposto
        distribuidor = cust_fabr * 0.1 ;
        imposto = cust_fabr * 0.15;
    }else{ // 15% do distribuidor 20% de imposto
        distribuidor = cust_fabr * 0.15 ;
        imposto = cust_fabr * 0.20;
    }
    printf("\nDistribuidor: R$ %f",distribuidor);
    printf("\nImposto: R$ %f",distribuidor);
    printf("\n================================\n");
    return(0);
}