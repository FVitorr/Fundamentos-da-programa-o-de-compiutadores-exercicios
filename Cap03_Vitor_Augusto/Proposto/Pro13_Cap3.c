/*Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float num,result;
    //obter entradas
    printf("++++++++++ Taboada ++++++++++");
    printf("\nDigite um Numero:");
    scanf("%f",&num);
    //Laço for, para i como multiplicador 
    //mostrar saida na tela
    for (int i=0;i<=10;i++){
        result = num * i;
        printf("\n%f * %d = %f",num,i,result);
    }
    return(0);
}
