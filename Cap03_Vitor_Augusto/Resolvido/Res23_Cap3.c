#include<stdio.h>
#include<stdlib.h>
#include <math.h>
 /*
     Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número. 
*/

int main(){
    float num, part_frac;
    int part_int, arr_num;

    printf("Informe um número:");
    scanf("%f",&num);

    part_int = trunc(num); // trunca um valor real para um valor inteiro

    part_frac = num - ((int) num); // retorna a parte fracionária de um número real

    arr_num = round (num); //retorna o valor real arredondado para o número inteiro mais próximo
    //mostrar saida
    printf("A parte inteira desse numero: %d \nA parte fracionaria desse numero: %f  \nO arredondamento desse numero: %d ",part_int,part_frac,arr_num);

    return(0);  
}

