/*Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir.
 Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int opc;
    float num1;
    ///menu 
    printf("\n=================================\n");
    printf("        Menu de opcoes: \n1. Poupanca . \n2. Fundos de renda fixa.");
    printf("\n=================================");

    //obter opção desejada
    printf("\nOpcao:");
    scanf("%d",&opc);

    //obter valor investimento
    printf("\nInforme o valor para investir: R$ ");
    scanf("%f",&num1);

    if (opc == 1){ // poupança 3% no mes
        printf("\nPoupanca\nRendimento: R$ %f \nTotal: R$ %f",num1 * 0.03, num1 * 1.03);
    }else{ //Fundos de renda fixa 4% no mes
        printf("\nPoupanca\nRendimento: R$ %f \nTotal: R$ %f",num1 * 0.04, num1 * 1.04);
    }
    return(0);
}