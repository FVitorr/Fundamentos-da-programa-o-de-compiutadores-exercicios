#include <stdio.h>                             
#include <stdlib.h> 
//Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2 

int main(){
    float base,altura,res;

    //Obter as vadriaveis Base e Altura
    printf("\n\n++++ Area de um Triangulo ++++");
    printf("\n\nDigite o valor da base:");
    scanf("%f",&base);
    printf("\nDigite o valor da altura do Triangulo:");
    scanf("%f",&altura);

    //Calculo da Area
    res = base * altura / 2;

    //Mostrar Resultado
    printf("\nA medida da area e:%f",res);
    return(0);
}