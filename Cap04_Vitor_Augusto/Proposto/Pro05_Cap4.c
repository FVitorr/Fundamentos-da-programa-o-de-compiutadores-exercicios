/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int opc;
    float num1,num2;
    
    ///menu 
    printf("\n=================================\n");
    printf("        Menu de opcoes: \n1. Media . \n2. Diferenca do maior pelo menor. \n3. Produto entre os numeros digitados. \n4.Divisão do primeiro pelo segundo");
    printf("\n=================================");
    
    //obter opção desejada
    printf("\nOpcao:");
    scanf("%d",&opc);

    //obter entradas
    printf("\nInforme o Primeiro Numero:");
    scanf("%f",&num1);
    
    printf("\nInforme o Segundo Numero:");
    scanf("%f",&num2);

    switch (opc)
    {
    case 1: // media
        printf("\nA media e : %f",(num1+num2)/2);
        break;
    case 2:// Diferença do maior pelo menor
        // separa o maior e mostrar saida
        if (num1 < num2){
            printf("\n%f - %f = %f",num2,num1,num2-num1 );
        } else if (num1 > num2){
            printf("\n%f - %f = %f",num1,num2,num1-num2 );
        }else { //ordem não importa numeros iguais
            printf("\n%f - %f = %f",num2,num1,num2-num1 );
        }
        break;
    case 3: //3. Produto entre os números digitados
        printf("\n%f * %f = %f",num1,num2,num1 * num2);
        break;
    case 4:  //4.Divisão do primeiro pelo segundo
        if (num2 != 0){
            printf("\n%f / %f = %f",num1,num2,num1 / num2);
        }else{
            printf("\nOperacao Invalida");
        }
        break;
    default:
        printf("\nOpecao Invalida");
        break;
    }
    return (EXIT_SUCCESS);
}