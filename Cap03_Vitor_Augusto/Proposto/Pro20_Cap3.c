/*. Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a 
escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
sua ponta. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float ang,dist_,tm_escada;

    //obter entrada ângulo e distância da escada
    printf("\n\n+++++++++++++++++++++++++++++++++++++++");
    printf("\n\nDigite a medida do ângulo: ");
    scanf("%f",&ang);
    printf("\nDistância em que a escada está da parede: ");
    scanf("%f",&dist_);

    //transformar grau em rad
    ang = ang * 3.14159 / 180;

    //Calcular medida da escada 
    //printf("%f",cosf(ang));
    tm_escada = dist_ / cosf(ang);

    //Mostrar a saida  (medida da escada)
    printf("\nA escada tem %f und(s): ",tm_escada);
    printf("\n+++++++++++++++++++++++++++++++++++++++\n");
    return (0);
}