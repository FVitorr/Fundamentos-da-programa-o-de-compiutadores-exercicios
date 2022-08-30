/*Faça um programa que receba o preço de um produto, 
calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco,n_preco;
    //obter o preco
    printf("Informe o preco: R$ ");
    scanf("%f",&preco);
    //novo preco
    if (preco <= 50){  //5% de aumento
        n_preco = (preco * 0.05) + preco;
    }else if (preco > 50 && preco <= 100  ){ //10% de aumento
        n_preco = (preco * 0.10) + preco;
    }else{//15% de aumento
        n_preco = (preco * 0.15) + preco;
    }
    printf("Novo Preco: R$ %f",n_preco);

    //classificacao
    
    if (n_preco <= 80){
        printf("\nClassificacao: Barato");
    }else if (n_preco > 80 && n_preco <= 120  ){
        printf("\nClassificacao: Normal");
    }else if (n_preco > 120 && n_preco <= 200  ){
        printf("\nClassificacao: Caro");
    }else{
       printf("\nClassificacao: Muito Caro");
    }
    return(0);
}