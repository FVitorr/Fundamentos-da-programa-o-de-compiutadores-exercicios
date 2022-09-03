#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■■ a média das idades das pessoas com altura inferior a 1,50 m;
■■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■■ a quantidade de pessoas ruivas e que não possuem olhos azuis.
*/
int main(){
    int cor_olhos = 0 , cor_cabelo = 0 , idade = 0;
    int qtd_p50anos60kg = 0,t_idade = , qtd_a = 0, qtd_OAzul=0 , qtd_ruivos = 0;
    float peso,altura;

    for (int pes = 1 ; pes <= 6 ; pes++){
        printf ("\n+++++ Cadastro 0%d ++++++\n",pes);
        printf ("Informe Idade: ");
        scanf ("%d",&idade);
        printf ("Informe Peso: ");
        scanf ("%f",&peso);
        printf ("Informe Altura: ");
        scanf ("%f",&altura);
        printf("\n[1] Preto [2] Azul [3] Verde [4] Castanho\n");
        printf ("Informe codigo Cor Olhos: ");
        scanf ("%d",&cor_olhos);
        printf("\n[1] Preto [2] Castanho [3] Louro [4] Ruivo\n");
        printf ("Informe codigo Cor Cabelos: ");
        scanf ("%d",&cor_cabelo);
        printf("\n**************************");
    //a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
        if (idade > 50 && peso < 60){
            qtd_p50anos60kg = qtd_p50anos60kg + 1;
        }
        //■■ a média das idades das pessoas com altura inferior a 1,50 m;
        if (altura < 1.50){
            t_idade = t_idade + idade;
            qtd_a = qtd_a + 1;
        }
        //a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
        if (cor_olhos == 2){
            qtd_OAzul = qtd_OAzul + 1;
        }
        //a quantidade de pessoas ruivas e que não possuem olhos azuis.
        if (cor_cabelo == 4 && cor_olhos != 2){
            qtd_ruivos = qtd_ruivos + 1;
        }
    }
    printf("\n___ DADOS ____\n");
    printf("\nQuantidade de Pessoas com idades superior a 50 \ne peso inferior a 40Kg: %d",qtd_p50anos60kg);
    printf("\nA media das idades das pessoas com altura inferior a 1,50 m");
    printf("\nA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas")
    printf("\nA quantidade de pessoas ruivas e que não possuem olhos azuis.")

return(0);
}