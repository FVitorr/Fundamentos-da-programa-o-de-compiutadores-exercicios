#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digiatdo
*/

int main(){
    float num,a,b,c,d;

    //Obter Entradas
    printf("\nDigite um numero: ");
    scanf("%f",&num);

    // Calculos desenvolvidos 
    a = powf(num,2);
    b = powf(num,3);
    c = sqrtf(num);
    d = powf(num,(1.0/3.0));

    //mostrar saida 
    printf("\nO numero digitado ao quadrado: %f",a);
    printf("\nO numero digitado ao cubo: %f",b);
    printf("\nRaiz quadrada do numero digitado: %f",c);
    printf("\nRaiz cubica do numero digitado: %f",d);

    return(0);
}