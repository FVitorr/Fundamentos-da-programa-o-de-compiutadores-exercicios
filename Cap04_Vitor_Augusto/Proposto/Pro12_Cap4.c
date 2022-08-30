/*Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir,
 calcule e
mostre o valor a receber. Sabe-se que este é composto pelo 
salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal,grat,a_esc;

    //obter salario
    printf("Informe seu salario: R$ ");
    scanf("%f",&sal);
    //Bonificação
    if (sal <= 350){ //100 de gratificação
        grat = 100;
    }else  if (sal > 350 && sal < 600){ // 75 de gratificação
        grat = 75;
    }else  if (sal >= 600 && sal <= 900){ // 5o de gratificação%
         grat = 50;
    }else{ //35 de gratificação
        grat = 35;
    }
    printf("\nGratificacao: %f",grat);
    //imposto
    printf("Imposto: R$ %f",(sal + grat) * 0.07);
    //salario
    printf("Salario liquido: R$ %f",sal - ((sal + grat) * 0.07) + grat);
    return(0);
}