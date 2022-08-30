/*Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int cod;
    char cargo;
    //Obter entradas
    printf("\n\n_______ Salario Aumento _______\n\n");
    printf("Informe o codigo do cargo:");
    scanf("%d",&cod);

    switch (cod){
        case 1: // Aumento de 50%
            cargo = 'Escrituario';
            printf("%s",cargo);
            break;
        case 2:
            cargo = "Secretario";
            break;
        case 3:
            cargo = "Caixa";
            break;
        default:
            printf("Erro");
            break;
    }
    printf("test %s",cargo);
    return(0);
}