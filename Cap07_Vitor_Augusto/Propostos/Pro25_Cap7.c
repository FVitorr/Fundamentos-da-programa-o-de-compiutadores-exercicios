#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que:
■■ receba o preço de dez produtos e armazene-os em um vetor;
■■ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
uma matriz 5  10.
O programa deverá calcular e mostrar:
■■ a quantidade de produtos estocados em cada um dos armazéns;
■■ a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
■■ o preço do produto que possui maior estoque em um único armazém;
■■ o menor estoque armazenado;
■■ o custo de cada armazém. 
*/
#define p 2
#define a 2

int main(){
    float preco_p[p];
    int qtd[a][p],i_maior;

    for (int i = 0; i < p; i++){
        printf("Produto %d Valor:",i);
        scanf("%f",&preco_p[i]);
    }
    for (int i = 0; i < a;i++){
        printf("\n-- Armazen 0%d --\n",i);
        for (int j = 0; j < p; j++){
            printf("Quantidade Produto %d: ",j);
            scanf("%d",&qtd[i][j]);
        }
        printf("\n");
    }
    //calcular e mostrar a quantidade de produtos estocados em cada um dos armazéns;
    int qtd_p[a];
    int qtd_maior = 0,qtd_menor = 999999;
    for (int i = 0; i < p;i++){
        qtd_p[i] = 0;
        printf("\n-- Produto 0%d --\n",i);
        for (int j = 0; j < a; j++){
            printf("\n\tArmazen %d = %d ",j,qtd[j][i]); 
            qtd_p[i] = qtd_p[i] + qtd[j][i];
        }
    }
    //a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
    for (int i = 0; i < p;i++){
        printf("\nProduto 0%d Total: %d",i,qtd_p[i]);
    }
    //o preço do produto que possui maior estoque em um único armazém;
    int i_menor = 0,j_menor =0;
    for (int i = 0; i < a;i++){
        for (int j = 0; j < p; j++){
            if(qtd[i][j] > qtd_maior){
                qtd_maior = qtd[i][j];
                i_maior = j;
            } if(qtd[i][j] < qtd_menor){
                qtd_menor = qtd[i][j];
                i_menor = i;
                j_menor = j;
            }
        }
        printf("\n");
    }
    printf("Preco do produto com maior estoque: R$ %.2f",preco_p[i_maior]);
    //o menor estoque armazenado;
    printf("\nProduto %d Menor Estoque: %d",j_menor,qtd[i_menor][j_menor]);
    //o custo de cada armazém. 
    float custo;
    for (int i = 0; i < a;i++){
        printf("\n-- Armazen 0%d --\n",i);
        for (int j = 0; j < p; j++){
            custo = qtd[i][j] * preco_p[j];
            printf("\n\tValor Produto %d: R$ %.2f ",j,custo);
        }
    }
return(0);
}