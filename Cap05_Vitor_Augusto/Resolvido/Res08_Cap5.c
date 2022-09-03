#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que leia o número de termos, determine e mostre os valores de acordo com a série
a seguir:
Série = 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768...
*/
int main(){
    int num_termos,valores,num1 = 2,num2 = 7,num3 =3,qtd;

    printf("+++++++++++++++++++++++++++++++++");
    printf("\nInforme o numero de termos:");
    scanf("%d",&num_termos);
    qtd = 1;
    while (qtd <= num_termos){
        num1 = num1 * 2;
        printf("\n%d",num1);
        qtd = qtd + 1;
        if (qtd != num_termos){
            num2 = num2 * 3;
            printf("\n%d",num2);
            qtd = qtd + 1;
            if (qtd != num_termos){
                num3 = num3 * 4;
                printf("\n%d",num3);
                qtd = qtd + 1;
            }
        }

        qtd++;
    }
return(0);
}