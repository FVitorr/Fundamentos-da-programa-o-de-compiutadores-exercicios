#include <stdlib.h>
#include <stdio.h>

/*
*
*/
int main(){
    float sal_carlos,sal_joao;
    int meses;
    printf("Informe Salario Carlos: R$ ");
    scanf("%d",&sal_carlos);

    sal_joao = sal_carlos / 3;
    while (sal_joao < sal_joao){
        sal_carlos = sal_carlos + (sal_carlos * 2/100);
        sal_joao = sal_joao + (sal_joao * 5/100);
        meses = meses + 1;
    }
    printf("Meses: %d",meses);

return(0);
}