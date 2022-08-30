/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal,bon,a_esc;

    //obter salario
    printf("Informe seu salario: R$ ");
    scanf("%f",&sal);
    //Bonificação
    if (sal < 500){
        printf("Salario reajustado: R$ %f",(sal * 30/100) + sal);
    }else{
        printf("Seu salario nao apresenta reajuste");
    }
    return(0);
}