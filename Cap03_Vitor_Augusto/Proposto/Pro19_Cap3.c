/*
Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2
, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
a sua área (em m2
) e a potência de iluminação que deverá ser utilizada.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float lado1,lado2,area,pt_ilu;

    //obter entrada
    printf("\n\n+++++++++++++++++++++++++++++++++++++++");
    printf("\n\nDigite a primeira dimensão: ");
    scanf("%f",&lado1);
    printf("\nDigite a segundo dimensão: ");
    scanf("%f",&lado2);

    //Calcular area
    area = lado1 * lado2;
    //Calcular potencia 1m2 --- 18w
    pt_ilu = area * 18;

    //Mostrar a saida
    printf("\nAréa total: %f",area);
    printf("\nPotencia total: %f",pt_ilu);
    printf("\n+++++++++++++++++++++++++++++++++++++++\n");
    return (0);
}