#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
Menu de opções:
1. Somar dois números.
2. Raiz quadrada de um número. 
 */
int main(int argc, char** argv) {
    int opc;
    float num1,num2;
    
    ///menu 
    printf("\n=================================\n");
    printf("        Menu de opções: \n1. Somar dois números. \n2. Raiz quadrada de um número.");
    printf("\n=================================");
    
    //obter opção desejada
    printf("\nOpção:");
    scanf("%d",&opc);

    
    if (opc == 1){ //Somar dois numeros
        printf("Informe o Primeiro Numero:");
        scanf("%f",&num1);

        printf("Informe o Segundo Numero:");
        scanf("%f",&num2);
        printf("A soma desses dois numeros é %.1f",num1 + num2);
    }else if (opc == 2){ // Raiz quadrada de um numero 
        printf("Informe um Numero:");
        scanf("%f",&num1);
        printf("Sua Raiz Quadrada é: %f",sqrtf(num1));
        
    }else{
        printf("Opção Invalida");
    }
    

    return (EXIT_SUCCESS);
}

