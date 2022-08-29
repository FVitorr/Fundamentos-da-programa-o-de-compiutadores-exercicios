/*. Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float d_maior,d_menor,a;
    //obter entradas
    printf("\n\n++++++++++ Area de um losango ++++++++++");
    printf("\nInsira o tamanho da Diagonal Maior:");
    scanf("%f",&d_maior);
    printf("\nInsira o tamanho da Diagonal Menor:");
    scanf("%f",&d_menor);
    //efetuar calculos
    a = (d_maior * d_menor) / 2;
    
    printf("A área de um losango é: %f",a);
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    return(0);
}