/*. Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal;

    //obter salario
    printf("Informe seu salario: R$ ");
    scanf("%f",&sal);
    //aumento
    if (sal <= 300){ //50% aumento 
        printf("Novo Salario: R$ %f",sal * 1.5);
    }else  if (sal > 300 && sal <= 500){ //40% aumento 
        printf("Novo Salario: R$ %f",sal * 1.4);
    }else  if (sal > 500 && sal <= 700){ // 30% aumento 
        printf("Novo Salario: R$ %f",sal * 1.3);
    }else  if (sal > 700 && sal <= 800){ // 20% aumento 
        printf("Novo Salario: R$ %f",sal * 1.2);
    }else  if (sal > 800 && sal <= 1000){ // 10% aumento 
        printf("Novo Salario: R$ %f",sal * 1.1);
    }else{ //5% aumento
        printf("Novo Salario: R$ %f",sal * 1.05);
    }
    printf("\n")
    return(0);
}