#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba um número, calcule e mostre a tabuada desse número. 
*/
int main(){
    float num,resp;
    printf("+++++ Tabuada +++++++");
    printf("\nInforme um numero:");
    scanf("%f",&num);

    for (int i = 0; i <= 10;i++){
        printf("\n%.2f * %d = %.2f",num,i,num * i);
    }

return(0);
}