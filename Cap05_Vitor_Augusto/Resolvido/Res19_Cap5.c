#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um número não determinado de pares de valores [m,n], todos inteiros e
positivos, um par de cada vez, e que calcule e mostre a soma de todos os números inteiros entre m e n
(inclusive). A digitação de pares terminará quando m for maior ou igual a n.
*/
int main(){
    int m,n,som,dif;

    printf("Informe Numero 1:");
    scanf("%d",&m);
    printf("Informe Numero 2:");
    scanf("%d",&n);
    //num 1 maior
    
    while (m < n)
    {
        som = 0;
        dif = m - n;
        for (int i = m ; i < n ; i++){
            som = som + i;
        }
        printf("\nSoma: %d",som);
        
        printf("\nInforme Numero 1:");
        scanf("%d",&m);
        printf("\nInforme Numero 2:");
        scanf("%d",&n);
    }
    

return(0);
}