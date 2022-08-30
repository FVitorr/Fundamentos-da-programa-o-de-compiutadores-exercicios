/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
 utilizando as seguintes fórmulas (onde h é a altura):
■■ para homens: (72.7 * h) – 58.
■■ para mulheres: (62.1 * h) – 44.7 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura,peso_ideal;
    char sexo;

    //obter altura
    printf("Informe a Altura: ");
    scanf("%f",&altura);
    //obter sexo
    printf("Sexo: ");
    scanf("\n%c",&sexo);
    //verifficar os valores
    if (sexo == 'M' || sexo == 'm'){ 
        peso_ideal = (72.7 * altura) - 58;
    }else if (sexo == 'F' || sexo == 'f'){ 
        peso_ideal = (62.1 * altura) - 44.7;
    }else {
        printf("\nValores Informados Invalidos");
    }
    printf("\nPeso Ideal: %f",peso_ideal);
    return(0);
}