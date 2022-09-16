#include <stdlib.h>
#include <stdio.h>

/*
Elabore um programa que preencha uma matriz 12  4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:
■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
■■ o total vendido em cada semana durante todo o ano;
■■ o total vendido pela loja no ano. 
*/
#define l 12
#define c 4

int main(){
    // l representa mes
    float vendas[l][c],total_vendas = 0,t_mes[l];
    for (int i = 0; i < l;i++){
        printf("Mes %d\n",i);
        
        for (int j = 0; j < c; j++){
            printf("Semana: %d\nInforme valor de venda: ",j);
            scanf("%f",&vendas[i][j]);
            total_vendas = total_vendas + vendas[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < l;i++){
        t_mes[i] = 0;
        for (int j = 0; j < c; j++){
            t_mes[i] = t_mes[i] + vendas[i][j];
        }
    }
    //o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
    for (int i = 0; i < l;i++){
        printf ("\n%f ",t_mes[i]);
        switch (i) {
            case 0:
                printf("Janeiro ");
                break;
            case 1:
                printf("Fevereiro ");
                break;
            case 2:
                printf("Março ");
                break;
            case 3:
                printf("Abril ");
                break;
            case 4:
                printf("Maio ");
                break;
            case 5:
                printf("Junho ");
                break;
            case 6:
                printf("Julho ");
                break;
            case 7:
                printf("Agosto ");
                break;
            case 8:
                printf("Setembro ");
                break;
            case 9:
                printf("Outubro ");
                break;
            case 10:
                printf("Novembro");
                break;
            case 11:
                printf("Dezembro");
                break;
        }
    }
    //o total vendido em cada semana durante todo o ano;
    printf("\nVendas por Semana: ");
    float t_semana[c];
    for (int i = 0; i < c; i++){
        t_semana[i] = 0;
        for (int j = 0; j < l; j++){
            t_semana[i] = t_semana[i] + vendas[j][i];
        }
        printf("\nSemana %d: %f",i,t_semana[i]);
    }
    //o total vendido pela loja no ano. 
    printf("Total Vendido: R$ %f",total_vendas);
return(0);
}