#include <stdlib.h>
#include <stdio.h>

/*
 *  faça um programa que leia um valor N inteiro e positivo.
 *  Calcule e mostre o valor de E, conforme a
    fórmula a seguir:
 */
int main(int argc, char** argv) {
    
    int n;
    float e = 1,fat;
    
    printf("Informe N:");
    scanf("%d",&n);
    //Numeros de operaçoes
    for (int i = 0; i <= n ; i++){
        //calcular fatorial
        fat = 1;
        for (int f = 1; f <= i; f++){
            fat = fat * f;
        }
        e = e + (1/fat);
    }
    printf("e = %f ",e);
    return (EXIT_SUCCESS);
}