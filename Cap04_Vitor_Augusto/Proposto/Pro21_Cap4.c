/*Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod;
    float preco;

    //obter codigo e preço
    printf("\n+++++++++++++++++++++++++++++++++++\n");
    printf("Informe o codigo do produto: ");
    scanf("%d",&cod);
    printf("Informe o preco do produto: ");
    scanf("%d",&preco);
    //verifficar a procedencia de acordo com o codigo 
    if (cod == 1){ 
        printf("\nProcedencia: Sul");
    }else if (cod == 2){ 
        printf("\nProcedencia: Norte");
    }else if (cod == 3){ 
        printf("\nProcedencia: Leste");
    }else if (cod == 4){ 
        printf("\nProcedencia: oeste");
    }else if (cod == 5 || cod == 6){ 
        printf("\nProcedencia: Nordeste");
    }else if (cod >= 7 && cod <= 9){
         printf("\nProcedencia: Sudeste");
    }else if (cod >= 10 && cod <= 20){
         printf("\nProcedencia: Centro-oeste");
    }else if (cod > 21 && cod <= 30){
         printf("\nProcedencia: Nordeste");
    }else {
        printf("Codigo Invalido");
    }
    printf("\n+++++++++++++++++++++++++++++++++++\n");
    return(0);
}