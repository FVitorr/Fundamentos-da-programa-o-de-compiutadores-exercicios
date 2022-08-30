/*. Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    float preco,des;
    //preço atual de um produto
    printf("\nInforme o preco atual: R$ ");
    scanf("%f",&preco);

    if (preco > 30 && preco <= 100){ // desconto de 10%
        des = preco * 0.10;
    }else if (preco > 100){ // desconto de 15%
        des = preco * 0.15;
    }else{ // sem desconto
        des = 0; 
    }
    printf("Novo Preco: R$ %f",preco - des);
    return(0);
}