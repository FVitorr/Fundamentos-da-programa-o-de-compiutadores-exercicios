/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal,bon,a_esc;

    //obter salario
    printf("Informe seu salario: R$ ");
    scanf("%f",&sal);
    //Bonificação
    if (sal < 300){ //35% 
        printf("Salario reajustado: R$ %f",(sal * 35/100) + sal);
    }else{ // 15%
        printf("Salario reajustado: R$ %f",(sal * 15/100) + sal);
    }
    return(0);
}