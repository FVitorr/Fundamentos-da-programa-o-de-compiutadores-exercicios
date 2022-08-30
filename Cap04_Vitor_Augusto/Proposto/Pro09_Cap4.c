/*. Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    float  sal,bon,a_esc;

    //obter saldo médio no último ano.
    printf("Saldo médio no ultimo ano: R$ ");
    scanf("%f",&sal);
    //Bonificação
    if (sal > 400){ //30% 
        printf(" Valor do credito: R$ %f",(sal * 30/100) + sal);
    }else if (sal <= 400 && sal >300){ // 25%
        printf("Valor do credito:R$ %f",(sal * 25/100) + sal);
    }else if (sal <= 300 && sal > 200){ // 20%
        printf("Valor do credito:R$ %f",(sal * 20/100) + sal);
    }else { // 10%
        printf("Valor do credito:R$ %f",(sal * 10/100) + sal);
    }
    return(0);
}