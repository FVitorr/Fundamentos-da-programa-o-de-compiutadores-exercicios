#include <stdlib.h>
#include <stdio.h>

/*
*22. Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero
*/
int main(){
    int i = 0,idade,qtd_entry=0;
    float altura,soma_altura = 0;

    while (i < 1){
        printf("Informe Idade: ");
        scanf("%d",&idade);

        printf("Informe Altura: ");
        scanf("%f",&altura);

        if (idade > 50){
            qtd_entry++;
            soma_altura = soma_altura + altura;
        }

        //encerrar o programa
        if (idade <= 0){
            i++;
        }
    }
    printf("A media das Alturas para quem tem mais de 50 anos e: %f",soma_altura / qtd_entry);

return(0);
}