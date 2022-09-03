#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
■■ a média das idades das dez pessoas;
■■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
■■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m. 

*/
int main(){
    int idade = 0;
    int t_idade = 0,qtd_ps90 = 0,qtd_id10 = 0,total_190 = 0;
    float peso,altura,med;

    for (int pes = 1 ; pes <= 6 ; pes++){
        printf ("\n+++++ Cadastro 0%d ++++++\n",pes);
        printf ("Informe Idade: ");
        scanf ("%d",&idade);
        printf ("Informe Peso: ");
        scanf ("%f",&peso);
        printf ("Informe Altura: ");
        scanf ("%f",&altura);

        t_idade = t_idade + idade;
        // a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
        if (peso > 90 && altura < 1.50){
            qtd_ps90 = qtd_ps90 + 1;
        }
        if (altura > 1.90)
        {
            if (idade > 10 && idade < 30){
                qtd_id10 = qtd_id10 + 1;
            }
            total_190 = total_190 + 1;
        }
    }
    printf("\n+++++ DADOS +++++\n");
    //a média das idades das dez pessoas;
    printf("\nMedia das Idades: %f",t_idade/10);
    printf("\nQuantidade de p. com + 90kg e < 1.50m altura: %d",qtd_ps90);
    printf("\nPorcentagem de P. com 10 < Idade < 30 entre as p. com < 1.90m: %.2f%%",qtd_id10 * 100 / total_190);
return(0);
}