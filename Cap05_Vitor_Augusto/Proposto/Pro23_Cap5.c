#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido.
Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de mese
*/
int main(int argc, char** argv) {
    int opcao, meses;
    float salario, n_salario, ferias, decimo_terceiro;

    do {
        printf("Menu de opções \n");
        printf("\t 1. Novo salário \n\t 2. Férias \n\t 3. 13º Salário \n\t 4. Sair \n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 4) {
            break;
        }

        switch (opcao) {
            case 1:
                printf("Novo salário \n");
                printf("    Digite seu salário atual: ");
                scanf("%f", &salario);

                if (salario < 210) {
                    n_salario = salario * 1.15; //Aumento de 15%
                } else if (salario >= 210 && salario <= 600) {
                    n_salario = salario * 1.10; //Aumento de 15%
                } else if (salario > 600) {
                    n_salario = salario * 1.05; //Aumento de 5%
                }

                printf("    Seu novo salário sera de R$ %.2f. \n \n", n_salario);
                break;

            case 2:
                printf("Férias \n");
                printf("    Digite seu salário atual: ");
                scanf("%f", &salario);
                ferias = salario + (salario / 3);
                break;

            case 3:
                printf("13º Salário \n");
                printf("Digite seu salário atual: ");
                scanf("%f", &salario);
                do {
                    printf("    Digite a quantidade de meses trabalhados (No máximo 12): ");
                    scanf("%d", &meses);

                    decimo_terceiro = salario * meses / 12;

                    printf("    Você receberá R$ %.2f de 13º. \n\n", decimo_terceiro);
                } while (meses > 12);
                break;
                
            default: 
                printf("Opção inválida. \n\n");
        }
    } while (opcao != 4);



    return (EXIT_SUCCESS);
}