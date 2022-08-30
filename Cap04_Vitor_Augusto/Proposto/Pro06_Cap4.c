/*Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    char opc;
    float num1,num2;
    
    ///menu 
    printf("\n=================================\n");
    printf("        Menu de opcoes: \na) O primeiro numero elevado ao segundo numero. \nb) Raiz quadrada de cada um dos numero. \nc) Raiz cubica de cada um dos numero.");
    printf("\n=================================");

    //obter opção desejada
    printf("\nOpcao:");
    scanf("%c",&opc);

    //obter entradas
    printf("\nInforme o Primeiro Numero:");
    scanf("%f",&num1);
    
    printf("\nInforme o Segundo Numero:");
    scanf("%f",&num2);

    if (opc == 'A' || opc == 'a'){//O primeiro número elevado ao segundo número.
        printf("\n%f ^ %f = %f",num1,num2,powf(num1,num2));
    } else if (opc == 'B' || opc == 'b'){ //Raiz quadrada de cada um dos números
        printf("\nRaiz Quadrada de %f = %f \nRaiz Quadrada de %f = %f ",num1,sqrtf(num1),num2,sqrtf(num2));
    } else if (opc == 'C' || opc == 'c'){//c) Raiz cúbica de cada um dos números
        printf("\nRaiz Cubica de %f = %f \nRaiz Cubica de %f = %f ",num1,pow(num1,1/3),num2,pow(num2,1/3));
    }
    return(0);
}