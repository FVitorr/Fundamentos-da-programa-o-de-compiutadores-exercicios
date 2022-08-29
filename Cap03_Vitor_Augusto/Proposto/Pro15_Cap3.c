/*João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
João. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float slr,conta1,conta2;
    // Obter as variaveis de entrada
    printf("Digite o salario: R$");
    scanf("%f",&slr);

    printf("Informe o valor da primeira conta: R$");
    scanf("%f",&conta1);

    printf("Informe o valor da segunda conta: R$");
    scanf("%f",&conta2);

    //Calculo do salario total = o valor da duas contas e as duas mutas
    slr = slr - conta1 - conta2 - (conta1 * 0.02) - (conta2 * 0.02);
    //Mostrar na tela
    printf("O Salario final: R$ %f",slr);
    return(0);

}
