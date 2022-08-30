/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
SALÁRIO P*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal,bon,a_esc;

    //obter salario
    printf("Informe seu salario: R$ ");
    scanf("%f",&sal);
    //Bonificação
    if (sal <= 300){ //15% de aumento 
        printf("Salario reajustado: R$ %f",(sal * 15/100) + sal);
    }else  if (sal > 300 && sal < 600){ // 10%
        printf("Salario reajustado: R$ %f",(sal * 10/100) + sal);
    }else  if (sal >= 600 && sal <= 900){ // 5%
        printf("Salario reajustado: R$ %f",(sal * 5/100) + sal);
    }else{
        printf("Salario reajustado: R$ %f",sal );
    }
    return(0);
}