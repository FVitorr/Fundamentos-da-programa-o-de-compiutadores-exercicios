/*Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros. */ 

#include <stdio.h>
#include <stdlib.h>

int main (){
    float a_esc, a_usu, qtd_degrau;
    //Obter as entradas altura degrau, altura alcançar
    printf("Informe a altura de cada degrau (em m): ");
    scanf("%f",&a_esc  );

    printf("Informe a altura que deseja alcancar (em m):");
     scanf("%f",&a_usu  );

    //calcular a qtd de degraus 

    qtd_degrau = a_usu / a_esc;

    printf ("Devera subir %f degraus para atingir seu objetivo",qtd_degrau);

    return(0);

    
}