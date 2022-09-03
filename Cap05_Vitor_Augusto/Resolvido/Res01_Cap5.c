#include <stdlib.h>
#include <stdio.h>



 /* Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que: 
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00. 
b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial. 
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano 
anterior.
 */

int main(int argc, char** argv) {
    float sal = 1000,percentual = 0.015;
    int ano;
    //obter ano atual
    printf("Informe o Ano Atual:");
    scanf("%d",&ano);
    // 2006
    sal = sal + (percentual * sal);
    printf("2006: R$ %f",sal);
    // 2007
    printf("\n");
    for (int i = 2007; i <= ano; i++ ){
        percentual = 2 * percentual;
        sal = sal + (percentual * sal);
        printf("\n%d: R$ %f",i,sal);
    }
    printf("\n");
    
    return(0);
}