/*. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    //obter idade
    printf("Informe a Idade: ");
    scanf("%d",&idade);
    //verifficar maioridade
    if (idade >= 18){ 
        printf("\nMaior de Idade");
    }else { 
        printf("\nMenor de Idade");
    }
    return(0);
}