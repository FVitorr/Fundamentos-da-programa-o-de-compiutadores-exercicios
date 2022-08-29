#include <stdio.h>
#include <stdlib.h>

/*Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga
CPMF de 0,38% e o saldo inicial da conta está zerado.*/

#define cpmf 0.38


int main() {
    float salario,vlr_cpmf1,vlr_cpmf2,vlr_chq1,vlr_chq2;

    //obter os valores

    printf ("\nSalario Inicial: R$ ");
    scanf("%f",&salario);
    printf("\nCheque 1: R$ ");
    scanf("%f",&vlr_chq1);
    printf("\nCheque 2: R$ ");
    scanf("%f",&vlr_chq2);

    //Calculo dos valores do cpmf para os dois cheques
    vlr_cpmf1 = vlr_chq1 * cpmf / 100;
    vlr_cpmf2 = vlr_chq2 * cpmf /100;
    
    //Mostrar Saida
    printf("\n\nSalario Atual: R$ %f\n",salario - vlr_cpmf1 - vlr_cpmf2 - vlr_chq1 - vlr_chq2);

    
    return(0);
}