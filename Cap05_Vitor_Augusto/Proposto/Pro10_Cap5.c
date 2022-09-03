#include <stdlib.h>
#include <stdio.h>


/*
 Faça um programa que receba dez números, calcule e mostre 
 * a soma dos números pares e a soma dos 
números primos

 */
int main(int argc, char** argv) {
    int somaPar = 0, somaImpar = 0,i=0,num;
    
    while(i < 10){
        printf("Informe um numero:");
        scanf("%d",&num);
        if (num % 2 == 0){
            somaPar = somaPar + num;
        }else{
            somaImpar = somaImpar + num;
        }
        i++;
    }
    printf("SOMA PAR: %d",somaPar);
    printf("\nSOMA IMPAR: %d",somaImpar);
    
    
    return (EXIT_SUCCESS);
}

