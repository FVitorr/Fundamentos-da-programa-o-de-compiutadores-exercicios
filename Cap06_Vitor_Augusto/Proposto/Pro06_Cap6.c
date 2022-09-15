#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■■ o total das vendas de todos os vendedores;
■■ o maior valor a receber e o nome de quem o receberá;
■■ o menor valor a receber e o nome de quem o receberá.
*/
#define t 10
#define comPorc 0.25
int main(){
    int mat[t],max_mat = 0,min_mat = 0;
    float comi[t],vendas[t],max_comi = 0,min_comi = 99999;
    //preencher os vetores
    printf("\n-- Informe: --\n");
    for (int i = 0; i < t; i++){
        printf("Numero de identificacao: ");
        scanf("%d",&mat[i]);
        printf("Vendas: R$ ");
        scanf("%f",&vendas[i]);
    }
    //relatório com os nomes dos vendedores e os valores a receber referentes à comissão
    printf("\n\tRelatorio - Comissao\n");
    for (int i = 0; i < t; i++){
        comi[i]= vendas[i] * comPorc;
        printf("\n\t%d\tR$ %.2f",mat[i],comi[i]);
        if (max_comi < comi[i]){
            max_comi = comi[i];
            max_mat = mat[i];
        }
        if (min_comi > comi[i]){
            min_comi = comi[i];
            min_mat = mat[i];
        }
    }
    printf("\n\n\tRelatorio - Total Vendas\n");
    for (int i = 0; i < t; i++){
        printf("\n\t%d\tR$ %.2f",mat[i],vendas[i]);
    }
    //o maior valor a receber e o nome de quem o receberá;
    printf("\n\n  Vendedor: %d Maior Comissao: %.2f \n",max_mat,max_comi);
    //o menor valor a receber e o nome de quem o receberá.
    printf("  Vendedor: %d Menor Comissao: %.2f \n",min_mat,min_comi);

return(0);
}