/*Faça um programa para resolver equações do 2o grau*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2, delta;
    //Obter entradas
    printf("\n++++++++++++++++++++++\n");
    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b: ");
    scanf("%f",&b);
    printf("Informe o valor de c: ");
    scanf("%f",&c);

    //ax2 + bx + c = 0
    // se a = 0 equação invalida
    if (a == 0){
        printf("****** Equacao invalida ******");
    }
    //calcular delta b^2 - 4 a c 
    delta = pow(b,2) - 4 * a * c;
    // delta < 0 não existe raiz
    if (delta < 0){
        printf("**** A equacao nao apresenta raizes reais ****");
    } else if (delta == 0){ //apresenta duas raizes iguais
        x1 = ((-b)+sqrtf(delta))/ (2 * a);
        printf ("\n X1 = %f \n X2 = %f",x1,x1);
    } else { //apresenta duas raizes diferentes
        x1 = ((-b)+sqrtf(delta))/ (2 * a);
        x2 = ((-b)-sqrtf(delta))/ (2 * a);
        printf ("\n X1 = %f \n X2 = %f",x1,x2);
    }
    printf("\n++++++++++++++++++++++\n");
    return(0);
}