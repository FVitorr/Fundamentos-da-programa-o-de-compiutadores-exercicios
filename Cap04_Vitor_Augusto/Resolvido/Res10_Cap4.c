/*
Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usuário. Cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o
segundo, o mês e o terceiro, o ano.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int dd1,mm1,yy1,dd2,mm2,yy2;

    //Obter entradas do primeiro mes
    printf("\n++++++ INFORME OS DADOS DA PRIMEIRA DATA ++++++");
    printf("\nInforme o Dia:");
    scanf("%d",&dd1);

    printf("\nInforme o Mês:");
    scanf("%d",&mm1);

    printf("\nInforme o Ano:");
    scanf("%d",&yy1);
    
    //Obter entradas do segundo mes
    printf("\n++++++ INFORME OS DADOS DA SEGUNDA DATA ++++++");

    printf("\nInforme o Dia:");
    scanf("%d",&dd2);

    printf("\nInforme o Mês:");
    scanf("%d",&mm2);

    printf("\nInforme o Ano:");
    scanf("%d",&yy2);

    //Comparar e mostrar saida
    //Ano     12/12/2000  -- 12/12/2021
    if (yy2 > yy1){ //
        printf("A data %d/%d/%d é maior que %d/%d/%d",dd2,mm2,yy2,dd1,mm1,yy1);
    } else if (yy2 < yy2){
        printf("A data %d/%d/%d é maior que %d/%d/%d",dd1,mm1,yy1,dd2,mm2,yy2);
    } else { // se o ano for igual comparar mes
        if (mm2 > mm1){
            printf("A data %d/%d/%d é maior que %d/%d/%d",dd2,mm2,yy2,dd1,mm1,yy1);
        }else if (mm2 < mm1){
            printf("A data %d/%d/%d é maior que %d/%d/%d",dd1,mm1,yy1,dd2,mm2,yy2);
        }else {
            if (dd2 > dd1){ // se mes for igual comparar dia
                printf("A data %d/%d/%d é maior que %d/%d/%d",dd2,mm2,yy2,dd1,mm1,yy1);
            } else if (dd2 < dd1){
                printf("A data %d/%d/%d é maior que %d/%d/%d",dd1,mm1,yy1,dd2,mm2,yy2);
            } else { 
                printf("A data %d/%d/%d é mesma que %d/%d/%d",dd1,mm1,yy1,dd2,mm2,yy2);
            }
        }
    }


    return(0);
}