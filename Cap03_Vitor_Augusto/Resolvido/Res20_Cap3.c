/*. Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float grau,altura_p,ang_rad,altura_e;
    //Obter as entradas
    printf("Digite a medida do angulo (em graus): ");
    scanf("%f",&grau);

    printf("Informe a altura da parede: ");
    scanf("%f",&altura_p);

    //transformar o angulo em rad
    ang_rad = grau * 3.14 / 180 ;
    //obter altura escada
    altura_e = altura_p / sin(ang_rad);
    printf("A altura da escada é %f",altura_e);

    return(0);
}