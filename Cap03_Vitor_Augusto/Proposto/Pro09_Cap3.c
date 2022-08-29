#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
*/

int main(){
    float bas_maior,bas_menor,altura,a;
    //Obter as variaveis 
    printf("++++++++++ Area de um Trapézio ++++++++++");
    printf("\nInforme a Base Menor: ");
    scanf("%f",&bas_menor);
    printf("\nInforme a Base Maior: ");
    scanf("%f",&bas_maior);
    printf("\nInforme a Altura: ");
    scanf("%f",&altura);
    //calculo da area de um trapezio 
    a = ((bas_maior + bas_menor)*altura)/2;
    printf("\n\nA area desse trapézio é : %f",a);
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");


    return(0);
}