#include <stdlib.h>
#include <stdio.h>

/*
*Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■■ o valor total das compras à vista;
■■ o valor total das compras a prazo;
■■ o valor total das compras efetuadas; e
■■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. 
*/
int main(){
    //declarar variaveis e seus tipos
    char tran_;
    float valor = 0, t_vista = 0, t_prazo = 0 , t_efetuado = 0,total_1parcela=0;
    int valid = 0;

    for (int i = 0 ; i < 15; i++){

        printf("Informe o tipo de transacao:");
        scanf("\n%c",&tran_);

        printf("Informe o valor: R$ ");
        scanf("%f",&valor);

        //somar trans a vista
        if (tran_ == 'v' || tran_ == 'V'){
            t_vista = t_vista + valor;
            //somar trans parcelados
        }else if (tran_ == 'p' || tran_ == 'P'){
            t_prazo = t_prazo + valor;
        }
        t_efetuado = t_efetuado + valor;
    }

    total_1parcela = t_prazo / 3;
    //mostrar saidas
    printf("\n TOTAL \n");
    printf("    Total das compras a vista: R$ %.2f. \n", t_vista);
    printf("    Total das compras a prazo: R$ %.2f. \n", t_prazo);
    printf("    Total das compras efetuadas: R$ %.2f. \n", t_efetuado);
    printf("    Total das 1º Parcelas em 3 vezes: R$ %.2f. \n", total_1parcela);

return(0);
}