 #include <stdio.h>
#include <stdlib.h>
/*
 * Faça um programa para calcular a área de um triângulo e que 
 * 
 * não permita a entrada de dados inválidos, ou seja, 
 * medidas menores ou iguais a 0.
 */
int main(int argc, char** argv) {
    float base,altura,area;
    do{
        printf("Informe o Valor da Base:");
        scanf("%f",&base);
    }while (base <= 0);
    do{
        printf("Informe o Valor da Altura:");
        scanf("%f",&altura);
    }while (altura <= 0);
    
    area = base * altura / 2 ;
    printf("Area: %f ",area);
    

    return (EXIT_SUCCESS);
}

