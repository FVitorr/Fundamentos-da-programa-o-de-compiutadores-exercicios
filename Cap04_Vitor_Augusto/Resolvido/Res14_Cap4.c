/*. Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
acrescido de bonificação e de auxílio escola.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal,bon,a_esc;

    //obter salario
    printf("Informe seu salario:");
    scanf("%f",&sal);
    //Bonificação
    if (sal<=500){
        bon = sal * 5/100;
    }else if (sal>500 && sal<=1200){
        bon = sal * 12/100;
    }else if (sal>1200){
        bon = sal * 0/100;
    }
    //auxilio escola
    if (sal<=600){
        a_esc = 150;
    }else{
        a_esc = 100;
    }
    printf("\n****** Extrato ******");
    printf("\n* Salario: R$ %f\n* Bonificacao: R$ %f\n* Auxilio Escola: R$ %f\n* Total: R$ %f ",sal,bon,a_esc,sal+bon+a_esc);
    printf("\n*********************");
    return(0);

}