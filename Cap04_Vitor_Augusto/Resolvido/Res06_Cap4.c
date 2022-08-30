#include <stdio.h>
#include <stdlib.h>

/*
 * 6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.
 */
int main() {
    int num1;
    //obter entrada
    printf("\nInforme um numero:");
    scanf("%d",&num1);
    //Testar se é par
    if (num1%2 == 0){
        printf("Este número é Par\n");
    }else{
         printf("Este número é Impar\n");
    }

    return (EXIT_SUCCESS);
}
