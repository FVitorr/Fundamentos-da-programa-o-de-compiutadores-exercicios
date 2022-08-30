/*Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    //obter idade
    printf("\n++++++++ Categoria Nadador ++++++++\n");
    printf("Informe a Idade: ");
    scanf("%d",&idade);
    //verifficar categoria por idade
    if (idade >= 5 && idade <= 7){ 
        printf("\nCategoria: Infantil");
    }else if (idade >= 8 && idade <= 10){ 
        printf("\nCategoria: Juvenil");
    }else if (idade >=11 && idade <= 15){ 
        printf("\nCategoria: Adolescente");
    }else if (idade >=16 && idade <= 30){ 
        printf("\nCategoria: Adulto");
    }else if (idade > 30){ 
        printf("\nCategoria: Senior");
    }else{
        printf("\nNão existe categoia para faiza etaria informada");
    }
    printf("\n+++++++++++++++++++++++++++++++++++\n");
    return(0);
}