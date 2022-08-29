#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2

//Definir pi como 3.14
#define pi 3.14
 
int main(){
    float raio,res;
    //Obter o valor do raio
    printf("+++++ Calculo da Area de um Circulo +++++");
    printf("\n\nDigite o valor do raio: ");
    scanf("%f",&raio);
    //raio ao quadrado
    raio = powf(raio,2); //elevar float raio ao quadrado 
    res = pi * raio; //Calcular Area
    //mostrar a saida
    printf("\nA area do circulo e %f\n",res);
    printf("\n++++++++++++++++++++++++++++++++++++++++");
    return(0);
}
